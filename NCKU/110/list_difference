def list_difference(L1, L2):
    dummy = ListNode(0) # 建立一個虛擬頭節點
    tail = dummy 
    
    while L1 and L2:
        if L1.val < L2.val:
            tail.next = L1   # L1 中的節點不在 L2 中，加入結果
            L1 = L1.next
        elif L1.val > L2.val:
            L2 = L2.next   # L2 中的節點一定不在結果中，移動 L2
        else:
            L1 = L1.next # 同值節點都跳過
            L2 = L2.next
            
    if L1:
        tail.next = L1  # L1 的剩餘節點加入結果
        
    return dummy.next
