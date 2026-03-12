print("***** 문제1 *****")
a=input('경과 일을 입력하세요:') #경과일 입력받기
a=int(a)
if (a%7==0): #경과일이 7의 배수인 경우 판별
    b='화'#날짜 저장하기
elif (a%7==1):#경과일이 7의 배수+나머지가 1인 경우 판별
    b='수'#날짜 저장하기
elif (a%7==2):#경과일이 7의 배수+나머지가 2인 경우 판별
    b='목'#날짜 저장하기
elif (a%7==3):#경과일이 7의 배수+나머지가 3인 경우 판별
    b='금'#날짜 저장하기
elif (a%7==4):#경과일이 7의 배수+나머지가 4인 경우 판별
    b='토'#날짜 저장하기
elif (a%7==5):#경과일이 7의 배수+나머지가 5인 경우 판별
    b='일'#날짜 저장하기
elif (a%7==6):#경과일이 7의 배수+나머지가 6인 경우 판별
    b='월'#날짜 저장하기
print('{}일 후는 {}요일'.format(str(a),b))
print()#다음 문제와 줄 띄우기
print('***** 문제2 *****')
a=int(input('경과 일을 입력하세요:'))#경과일 입력받기
b='화수목금토일월' #요일 리스트 형성하기
c=a%7 #7로 나눈 나머지(요일 판별용으로)계산하기
a=str(a)#문자열로 변환시키기
print('{}일 후는 {}요일'.format(a,b[c]))#경과일과 리스트에서 요일 지정받아서 출력
print()#다음 문제와 줄 띄우기
print("***** 문제3 *****")
medals= [['Austria',0,2,1],['Canada',4,8,5],['China',5,0,1],['France',0,4,5],
         ['Germany',1,1,2],['Japan',1,1,0],['Korea',5,3,1],['Norway',4,4,7],
         ['Russia',4,6,4],['Viet Nam',1,1,5]]
medals[0].append(medals[0][1]+medals[0][2]+medals[0][3])#메달합계 추가하기
medals[1].append(medals[1][1]+medals[1][2]+medals[1][3])#메달합계 추가하기
medals[2].append(medals[2][1]+medals[2][2]+medals[2][3])#메달합계 추가하기
medals[3].append(medals[3][1]+medals[3][2]+medals[3][3])#메달합계 추가하기
medals[4].append(medals[4][1]+medals[4][2]+medals[4][3])#메달합계 추가하기
medals[5].append(medals[5][1]+medals[5][2]+medals[5][3])#메달합계 추가하기
medals[6].append(medals[6][1]+medals[6][2]+medals[6][3])#메달합계 추가하기
medals[7].append(medals[7][1]+medals[7][2]+medals[7][3])#메달합계 추가하기
medals[8].append(medals[8][1]+medals[8][2]+medals[8][3])#메달합계 추가하기
medals[9].append(medals[9][1]+medals[9][2]+medals[9][3])#메달합계 추가하기

print(medals[0])#Austria 메달 출력
print(medals[1])#Canada 메달 출력
print(medals[2])#China 메달 출력
print(medals[3])#France 메달 출력
print(medals[4])#Germany 메달 출력
print(medals[5])#Japan 메달 출력
print(medals[6])#Korea 메달 출력
print(medals[7])#Norway 메달 출력
print(medals[8])#Russia 메달 출력
print(medals[9])#Viet Nam 메달 출력
print()#줄 띄우기(메달 전체 출력용)
print(medals)#나라별 메달 출력
