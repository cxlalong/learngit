using system
var high = new array,weight =new array,bmi=new array
var t=new number
out.println("请输入人数：")
t=in.input()
function getmessage(t)
var a=t+1
out.println("请输入第"+a+"个人的身高:")
high[t]=in.input()   
out.println("请输入第"+a+"个人的体重：") 
weight[t]=in.input()
bmi[i]=weight[i]/(high[i]*high[i])
end
for  i=0,i<t,i++
    getmessage(i)
end
for  i=0,i<t,i++
    var a=i+1
    if bmi[i]>25
    out.println("第"+a+"个人BMI指数为："+bmi[i]+",属于超重")
    
    end
    if bmi[i]<18.5
        out.println("第"+a+"个人BMI指数为："+bmi[i]+",属于偏瘦")
       
    end
    if bmi[i]<=25&&bmi[i]>=18.5
        out.println("第"+a+"个人BMI指数为："+bmi[i]+",属于正常")
    end
end