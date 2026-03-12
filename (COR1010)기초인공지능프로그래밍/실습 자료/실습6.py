print("***** 문제1 *****")#문제번호 출력하기
print("*메뉴 가격 찾기입니다")#문자열 출력

menu={'그린티라떼':3000,'모카라떼':3500,'아메리카노':2000,'카페라떼':2500}#메뉴별 가격 사전객체 형성
a=input('메뉴? ')#메뉴 입력받기
while a != '':#공백을 입력받지 않을시
    if a not in menu:#메뉴에 없을시
        print("없는 메뉴!")#없는 메뉴일시 출력
        a=input('메뉴? ')#메뉴 입력받기
    else:#없는 메뉴가 아닐시
        print('{} {}원'.format(a,menu[a]))#메뉴랑 가격 출력하기
        a=input('메뉴? ')#메뉴 입력받기
print("")#문제간 공백 출력
print("***** 문제2 *****")
fr=open('data.txt','r')#읽기모드로 파일 열기
sentence=fr.read()#파일을 문자로 읽을 수 있게 변환
print("** 읽은 문자열")#문자열 출력
print(sentence)#읽은 문자열 출력하기
fr.close()#파일 닫기
sentence=sentence.replace('~',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('!',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('@',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('#',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('$',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('%',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('^',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('&',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('*',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('-',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('_',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('+',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('=',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('(',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace(')',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('{',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('}',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('[',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace(']',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace(':',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace(';',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('?',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('.',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace(',',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('<',' ')#특수문자 공백으로 변환하기
sentence=sentence.replace('>',' ')#특수문자 공백으로 변환하기
print("** 새문자열")#문자열 출력
print(sentence)#새 문자열 출력하기
newlist= sentence.split()#리스트 객체로 변환하기
newdictionary={}#사전선언하기
for x in newlist:#리스트 반복문 돌리기
    if x in newdictionary :#사전에 있는거 확인하기
        newdictionary[x]+=1#있으면 숫자 1 증가하기
    else:#없을 시 돌아가는 조건
        newdictionary[x]=1#없으면 새로 선언하기
print("** 단어별 빈도수")#안내문 출력하기
for y in newdictionary:#사전내용 출력하기 위한 반복문
    print('{:10}{:3}'.format(y,newdictionary[y]))#사전 내용 출력하기

