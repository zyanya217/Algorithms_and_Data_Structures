public class Clock {
    private int hour;        // 時
    private int minutes;     // 分

    // 建構子，初始化時鐘時間
    public Clock(int hour, int minutes) {
        this.hour = hour;
        this.minutes = minutes;
    }

    // 計算時針與分針夾角的方法
    public double angle() {
        // 計算時針的角度，每小時30度，每分鐘再加上0.5度
        double hourDegree = (hour % 12) * 30 + (double) minutes / 60 * 30;
        
        // 計算分針的角度，每分鐘6度
        double minDegree = minutes * 6;

        // 計算夾角的絕對值
        double angle = Math.abs(hourDegree - minDegree);

        // 取最小的夾角，因為夾角不會超過180度
        return Math.min(angle, 360 - angle);
    }

    public static void main(String[] args) {
        // 建立物件clock
        Clock clock = new Clock(9, 0);
        double angle = clock.angle();

        System.out.println("夾角為：" + angle + " 度");
    }
}
