import java.util.Scanner;

public class DateCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // 接收使用者輸入
        System.out.print("請輸入開始日期（年 月 日，以空格分隔）：");
        int startYear = scanner.nextInt();
        int startMonth = scanner.nextInt();
        int startDay = scanner.nextInt();

        System.out.print("請輸入終止日期（年 月 日，以空格分隔）：");
        int endYear = scanner.nextInt();
        int endMonth = scanner.nextInt();
        int endDay = scanner.nextInt();

        // 使用 DateCalculator 計算天數
        int daysBetween = DaysBetween(startYear, startMonth, startDay, endYear, endMonth, endDay);

        // 輸出結果
        System.out.println("這段時間共有 " + daysBetween + " 天。");
    }

    public static int DaysBetween(int startYear, int startMonth, int startDay, int endYear, int endMonth, int endDay) {
        int days = 0;

        while (!(startYear == endYear && startMonth == endMonth && startDay == endDay)) {
            days++;
            startDay++;

            if (startDay > 31 || (startMonth == 2 && startDay > 28 && !isLeapYear(startYear))) {
                startDay = 1;
                startMonth++;

                if (startMonth > 12) {
                    startMonth = 1;
                    startYear++;
                }
            }
        }

        return days + 1;  // 包括頭尾兩天
    }

    //計算是否為"閏年"
    public static boolean isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
}

