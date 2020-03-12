#include <iostream>
#include <exception>
#include <memory>
#include "paillierCpp/callpaillier.h"

using namespace std;

int main()
{
    // key size 2048
    string cipher1 = "0100AF8724B5EEC13B4C5A3396378A8F15FFC54EB0096F4230E301C9EACF8DB59AFB8FAD2C33ED8A180C5F81422A23873E69F2348C19A4BF2DBDC5AE99ADFE8B12C6D5C23A6DC03BBD0FB1EA1A81C77B62E32B7BC1430BEA16AF607455BCD7135C75E886A571567515B089575C58DCCD1A6E7F1C9C36D2E0830200A74ED018C7ED560A5542C6DCAECB8382062AB4CBA95196F9AA92F973DF3AFA25AC4C77567A7461C93C9D0B706990E6DFD0E1593E7E36A0E2042D4FDDE9486B8BB48B24F27313E0210FC28DB38CA3B489135ECE9C3C4B19FDEF4D73FCBB6D33CDC323837AE10A7DFCF4B613686553DAF3EF4836224CAA2DB2A9B6BF41114A4A2007ECE65CC954B76625592894456FEDA855F53EEEF1A1F037C56274838D6C82BBEBD75493993A466DAB724262FC758FFDE600266FC8927FCCB9F787591BC9F18BB43DF401ABA855A81F0A57D1A75B35678DD016475584D716617D10D7A4F44E106869095BA9EDFF54FC42F42E4CEBE8783CC5975060887802FB90639E999CB2ECF73A03EBBE07DC5BC6F60FE4F1B0B6A41464454A52F677127C686F5DB0CC9C45C27ECEA500C51E702C4C89E7F9D82BFC8070DA2617DF51A29DDD63A46F8E6B584169A4BA82240520AAE2EB0E8DFAA0E7AC382118CDEFD9BE212016BB64B9B9C1BC23C5A1BE5C90E06E95D06023471769BCC55FB82A1FAB2518AEF644DDC0BA996432C0C2E2079508C0DC0B4C7B1A1B98AC5C81C41F8136F6C80351BBCD46F522D20DFECC9DF81EFAEC553485A074E66FD62ADA1BF40CB0035D1AE6419603649072709566F6CBED2304F9E6011336BED3A523C0A6C733A414537BAC453594538945C07F16918E98FE288ED0E380176BE7E19A2390427FBA311C0ED7BBE409154196A75BFE8E1FA171885CDC88BAD5DBF6E22B97E95CC8EC7E9F5E57FF8CF2DC38C25A4A5175E7918718A915EC8E3A8C233F9BA0A0D94E0C5117CAB4EB4EA01D67CB6EAD5DC023D963FB8C743A8BFF99D14F17421DB2E44B2C6733457B7452166E077A045FBC5EA458123B5EA13EF96C1DE0C8BE228A693E99B04BDD32FC01FD3A3240C14EF15E58";
    string cipher2 = "0100AF8724B5EEC13B4C5A3396378A8F15FFC54EB0096F4230E301C9EACF8DB59AFB8FAD2C33ED8A180C5F81422A23873E69F2348C19A4BF2DBDC5AE99ADFE8B12C6D5C23A6DC03BBD0FB1EA1A81C77B62E32B7BC1430BEA16AF607455BCD7135C75E886A571567515B089575C58DCCD1A6E7F1C9C36D2E0830200A74ED018C7ED560A5542C6DCAECB8382062AB4CBA95196F9AA92F973DF3AFA25AC4C77567A7461C93C9D0B706990E6DFD0E1593E7E36A0E2042D4FDDE9486B8BB48B24F27313E0210FC28DB38CA3B489135ECE9C3C4B19FDEF4D73FCBB6D33CDC323837AE10A7DFCF4B613686553DAF3EF4836224CAA2DB2A9B6BF41114A4A2007ECE65CC954B768A7217F5170D0F8487BFFB2264D597C5E1930EFFB3116658CBA574CA63D6745BC075AC10AC7332213819E0A347BD908E8536D957A0EF6BE15FD9D5B319FF4614D7398AC70BD06B42989CACD47C8026829E1E961FB0EDBE1765FF38D0CB78341C8487BC17CE55ED02207E4B98DFDB23E31A246CF71B8E38EC7969E0987D30F330CFEC6F47D225D51AE083EA45F67C53B7BB4453005325F8E6FF0867F39A48BB43A1E48D151988CCEB7022735BCC126E8CCAA4FE4B1DBA8A93F8B3252FC4E3F33F47F814A20858B6401BAE1DF20189BCD4585B646E736F1D725B0041D20DFFA65ED3E4F6C613451E2C69D5531275AE6D6DA58956B1CE49DC5866C5369205DCA47D4ECECA51213F020D5C7A92DFEF68FB9DBE2E8ABB0BF2052A382D220861BF95B18E43FE2030FBF7C830AC87D1405B9C9624523FC3F9F3C62781A67FB5838477139DDD3F5EE480117A83D2BBC3E34A6AE40B7D159BB6731AFFE4443E766DF6969182C618B79B1AAC2DF35CDAAD3C87E7DDD916A09838E0A2967493D7D0B045E37CC16D816E5A8F4F9020E713AE753DB415A455533CE0DEC5BD99D1A6023F4474873BB7A8CFE8DE09EF665CCBB8930426DE426A35E6CC3546ED4934680047A91A2B7C9BDF371EBAB098CE2E24120B40F6C3B98457658572EB95916B9BEC21B6352CA7BC77098F15E59C448BEED2C0298D67A3F3E618153C873E9158DBE6E012570";
    string cipher3 = "0100AF8724B5EEC13B4C5A3396378A8F15FFC54EB0096F4230E301C9EACF8DB59AFB8FAD2C33ED8A180C5F81422A23873E69F2348C19A4BF2DBDC5AE99ADFE8B12C6D5C23A6DC03BBD0FB1EA1A81C77B62E32B7BC1430BEA16AF607455BCD7135C75E886A571567515B089575C58DCCD1A6E7F1C9C36D2E0830200A74ED018C7ED560A5542C6DCAECB8382062AB4CBA95196F9AA92F973DF3AFA25AC4C77567A7461C93C9D0B706990E6DFD0E1593E7E36A0E2042D4FDDE9486B8BB48B24F27313E0210FC28DB38CA3B489135ECE9C3C4B19FDEF4D73FCBB6D33CDC323837AE10A7DFCF4B613686553DAF3EF4836224CAA2DB2A9B6BF41114A4A2007ECE65CC954B72AE8FB8B505E347B30AA9EAD3E933205583D4B842B48B5D1FCE5EF82F95FE405148E14208EFDEE45345232353212C03DBC5FDA9C14550A61957CAADE6B95D17182DD56B6D771BEB8163DCBA9A557BF2561B7931663923985BC2BB02ED1C13262AC4983E600784F9C3FF17E693E22236C7DB364149749EDDF3A1057A4159A7733DACA624367117C0D73FA053C21D8A98B7C945C8FD7B6713A7BA3913D690195597D7448229B192612EF2B4C838A525ED5272C1FBB8B6BAFBE4FA99FD1EABDF59B164B1AE263D7F8ECC59E71E3474E4F9F3E53B73DAB727831968E8CB0875BFF7131E0E2366945E647DD69BA58A01FA7EF20BB72BC486774679714E21CB63E16AF0C9D5DBE3266FD920ACD82036E80A04EE09B48D89283195D093E9760425E785CB9A7472E81C2CF079BB92EC5180002C5A134BA29E26EB17C1D4662F0B888D729F5BB57B2F288BC39A855BC1F509F8165FE434907F484476CFBC209A9C8943441A90186B64CB1113D04BD09CD9161B672E0CE54EE450932F6CC3D45D0E5E035322607A40A829C67CC81E09BC062BB007594B68BB85A4F8934739B8D5FF432EE57E840E1B7D66F721FC0BD6BF644A40C17CEF0ACE9F0EC98CD2D0EA81472A161A72DD1349FAFCA1C32D15F6AF0571BB4288DD479264D1A8DE5B318A06A3C013411D5F5037A5823404D30C542F8F809EA624CDBCD0332E6D28106484B2F4EC754D0";

    string result;
    shared_ptr<CallPaillier> callPaillier;
    callPaillier = std::make_shared<CallPaillier>();
    try
    {
        result = callPaillier->paillierAdd(cipher1, cipher2);
    }
    catch (CallException &e)
    {
        cout << string(e.what()) << endl;
    }
    cout << "Expected: " << cipher3 << endl;
    cout << "Actually: " << result << endl;
    if (result == cipher3)
        cout << "Test passed!" << endl;
    else
        cout << "Test failed!" << endl;
    return 0;
}
