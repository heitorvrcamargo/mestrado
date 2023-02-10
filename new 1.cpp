CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC
C
C Programa para cálculo da pressão de bombeamento capilar
C
CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC
implicit none
real*8 pi,roli,mili,nili,hlv,sigma,pv,tv,tl,velova,diva,reva,fva
real*8 dloopva,cpl,beta,ri,omega,espranhu,delta,compbomb,nuranhu
real*8 q,g,dp1,dp2,dp3,difpre,angulo(52),y5,alfa,area,raioh,veloli
real*8 dili,reli,fli,dloopli,rc,pl(52),pcm,qranhu,qlinha,psi(52)
real*8 r1(52),fhi2(52),lli,lva,y4,pp,alty(52),teta(52),ziz(52)
real*8 rah(52),arw(52),fhi0(52),fhi1(52),y6,zy,fhi3(52)
real*8 dheltah(52),ve(52),vemedia(52),relh(52),dloop,rova,y,zpp
real*8 za(52),fr(52),dheltapi(52),totcp,y1,y2(52),y3,miva,angre
real*8 pcmreal,xzero,fhizero,difreal,pteo,pltot
real*8 t,mv,rv,rg,niva,psat
real*8 dsigmadt,dpsdt,nunint
integer nuint,zipp,contador,i,x,ipp
character*8 fluido,tipofluido,perdatubo,tipotubo
C Entrada de dados
C Tipo de tubos = ranhura circunferencial (r), monogroove (m)
C Tipo de fluidos = agua (h), acetona (c), amonia (a), freon 113 (f)
C Perda na tubulação = sim (s), não (n)
C Numero de divisões da ranhura = nuint
C Angulo de abertura da ranhura = beta
C Raio interno da bomba capilar = ri
C Profundidade da ranhura = delta
C Largura da ranhura = omega
C Passo da ranhura = espranhu
C Comprimento da bomba capilar = compbomb
C Angulo de posicionamento da régua na bomba