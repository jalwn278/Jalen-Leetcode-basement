def isRectangleOverlap(rec1, rec2):
    left_x = max(rec1[0], rec2[0])
    left_y = max(rec1[1], rec2[1])

    right_x = min(rec1[2], rec2[2])
    right_y = min(rec1[3], rec2[3])
    
    return left_x < right_x and left_y < right_y