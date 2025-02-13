#include&lt;iostream&gt;
#include&lt;fstream&gt;
using namespace std;
int main()
{
ifstream indata;
indata.open(&quot;tons.txt&quot;);
if(!indata)

{
cout &lt;&lt; &quot;unable to open file&quot;;
return -1;
}
int numberOfTons;
float TONS_TO_POUNDS, TONS_TO_OUNCES, TONS_TO_KILOGRAMS, TONS_TO_GRAMS, pounds=2000,
ounces=32000, kilograms=907.185, grams=907185;
indata &gt;&gt; numberOfTons;
TONS_TO_POUNDS = numberOfTons * 2000;
TONS_TO_OUNCES = numberOfTons * 32000;
TONS_TO_KILOGRAMS = numberOfTons * (907.185);
TONS_TO_GRAMS = numberOfTons * 907185;
pounds = TONS_TO_POUNDS;
ounces = TONS_TO_OUNCES;
kilograms = TONS_TO_KILOGRAMS;
grams = TONS_TO_GRAMS;
cout &lt;&lt; numberOfTons &lt;&lt; &quot; tons is equal to &quot; &lt;&lt; pounds &lt;&lt;&quot; pounds&quot;&lt;&lt; endl;
cout &lt;&lt; numberOfTons &lt;&lt; &quot; tons is equal to &quot; &lt;&lt; ounces &lt;&lt; &quot; ounces&quot;&lt;&lt;endl;
cout &lt;&lt; numberOfTons &lt;&lt; &quot; tons is equal to &quot; &lt;&lt; kilograms &lt;&lt;&quot; kilograms&quot;&lt;&lt; endl;
cout &lt;&lt; numberOfTons &lt;&lt; &quot; tons is equal to &quot; &lt;&lt; fixed &lt;&lt; grams &lt;&lt; &quot; grams&quot;&lt;&lt;endl;
indata.close();
ofstream outdata;
outdata.open(&quot;report.txt&quot;);
if (!outdata)
{
cout &lt;&lt; &quot;unable to open file&quot;;
return -1;
}
outdata &lt;&lt; numberOfTons &lt;&lt; &quot; tons is equal to &quot; &lt;&lt; pounds &lt;&lt;&quot; pounds&quot; &lt;&lt;endl;
outdata &lt;&lt; numberOfTons &lt;&lt; &quot; tons is equal to &quot; &lt;&lt; ounces &lt;&lt;&quot; ounces&quot;&lt;&lt; endl;
outdata &lt;&lt; numberOfTons &lt;&lt; &quot; tons is equal to &quot; &lt;&lt; kilograms &lt;&lt;&quot; kilograms&quot;&lt;&lt;
endl;
outdata &lt;&lt; numberOfTons &lt;&lt; &quot; tons is equal to &quot; &lt;&lt;fixed&lt;&lt; grams &lt;&lt; &quot;
grams&quot;&lt;&lt;endl&lt;&lt;endl;
outdata &lt;&lt; &quot;CONVERSION FACTORS&quot; &lt;&lt; endl;
outdata &lt;&lt; &quot;1 ton = 2000 pounds&quot; &lt;&lt; endl;
outdata &lt;&lt; &quot;1 ton = 32000 ounces&quot; &lt;&lt; endl;
outdata &lt;&lt; &quot;1 ton = 907.185 kilograms&quot; &lt;&lt; endl;
outdata &lt;&lt; &quot;1 ton = 907185 kilograms&quot; &lt;&lt; endl;
outdata.close();
return 0;
}
