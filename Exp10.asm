.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN:
    MOV AX,@DATA
    MOV DS,AX            ; initialize data segment

    MOV DL,'A'           ; DL = 41H (ASCII of 'A')
    MOV CX,26            ; 26 uppercase letters
UPPER:
    MOV AH,02H           ; display character function
    INT 21H              ; print character in DL
    INC DL               ; next letter
    LOOP UPPER

    MOV AH,02H           ; new line (CR + LF)
    MOV DL,0DH
    INT 21H
    MOV DL,0AH
    INT 21H

    MOV DL,'a'           ; DL = 61H (ASCII of 'a')
    MOV CX,26            ; 26 lowercase letters
LOWER:
    MOV AH,02H
    INT 21H
    INC DL
    LOOP LOWER

    MOV AH,4CH
    INT 21H              ; exit to DOS
END MAIN
