print("***** 문제1 *****")
medals= [['Austria',0,2,1],['Canada',4,8,5],['China',5,0,1],['France',0,4,5],
         ['Germany',1,1,2],['Japan',1,1,0],['Korea',5,3,1],['Norway',4,4,7],
         ['Russia',4,6,4],['Viet Nam',1,1,5]]#메달리스트 선언하기

count=0#카운트 변수선언
for score in medals:#반복문 돌리기
        hap=score[1]+score[2]+score[3]#메달합 구하기
        score.append(hap)#메달합 추가하기
        print(medals[count])#count인 나라 리스트 출력하기
        count+=1#count증가시키기
print('')#줄 한칸 띄우기
print(medals)#medals변수 출력하기
print('')#줄 한칸 띄우기
print("***** 문제2 *****")
sentence = input('입력하세요\n')#문장 입력받기
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
print("** 특수문자를 공백으로 바꾼 새 문자열")#안내문 출력하기
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
    print('{:10}{:2}'.format(y,newdictionary[y]))#사전 내용 출력하기

        
