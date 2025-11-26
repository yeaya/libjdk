#include <sun/nio/cs/ext/IBM937$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM937$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM937.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM937 = ::sun::nio::cs::ext::IBM937;
using $IBM937$DecodeHolder = ::sun::nio::cs::ext::IBM937$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM937$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM937$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM937$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _IBM937$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IBM937$EncodeHolder::*)()>(&IBM937$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _IBM937$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM937$EncodeHolder", "sun.nio.cs.ext.IBM937", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM937$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM937$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_IBM937$EncodeHolder_FieldInfo_,
	_IBM937$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM937$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM937"
};

$Object* allocate$IBM937$EncodeHolder($Class* clazz) {
	return $of($alloc(IBM937$EncodeHolder));
}

$chars* IBM937$EncodeHolder::c2b = nullptr;
$chars* IBM937$EncodeHolder::c2bIndex = nullptr;

void IBM937$EncodeHolder::init$() {
}

void clinit$IBM937$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM937$EncodeHolder::c2b, $new($chars, 32512));
	$assignStatic(IBM937$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, u"%\n\u454a\u5341\u454c\u5345\u4841\u4e00\u4845\u4e59\u4847\u4e8c\u4849\u4eba\u484a\u513f\u484b\u5165\u484c\u516b\u4850\u51e0\u4851\u51f5\u4852\u5200\u4853\u529b\u4855\u5315\u4856\u531a\u4858\u5341\u4859\u535c\u485b\u5382\u485d\u53c8\u485e\u53e3\u485f\u56d7\u4860\u571f\u4861\u58eb\u4863\u5915\u4864\u5927\u4865\u5973\u4866\u5b50\u4868\u5bf8\u4869\u5c0f\u486a\u5c22\u486b\u5c38\u486c\u5c6e\u486d\u5c71\u486f\u5de5\u4870\u5df1\u4871\u5dfe\u4872\u5e72\u4876\u5efe\u4877\u5f0b\u4878\u5f13\u487b\u5f73\u487c\u5fc3\u487d\u6208\u487e\u6236\u487f\u624b\u4881\u652f\u4883\u6587\u4884\u6597\u4885\u65a4\u4886\u65b9\u4888\u65e5\u4889\u66f0\u488a\u6708\u488b\u6728\u488c\u6b20\u488d\u6b62\u488e\u6b79\u488f\u6bb3\u4890\u6bcb\u4891\u6bd4\u4892\u6bdb\u4893\u6c0f\u4894\u6c14\u4895\u6c34\u4896\u706b\u4897\u722a\u4898\u7236\u4899\u723b\u489a\u723f\u489b\u7247\u489c\u7259\u489d\u725b\u489e\u72ac\u489f\u7384\u48a0\u7389\u48a1\u74dc\u48a2\u74e6\u48a3\u7518\u48a4\u751f\u48a5\u7528\u48a6\u7530\u48a7\u758b\u48aa\u767d\u48ab\u76ae\u48ac\u76bf\u48ad\u76ee\u48ae\u77db\u48af\u77e2\u48b0\u77f3\u48b1\u793a\u48b2\u79b8\u48b3\u79be\u48b4\u7a74\u48b5\u7acb\u48b6\u7af9\u48b7\u7c73\u48b8\u7cf8\u48b9\u7f36\u48ba\u7f51\u48bb\u7f8a\u48bc\u7fbd\u48bd\u8001\u48be\u800c\u48bf\u8012\u48c0\u8033\u48c1\u807f\u48c2\u8089\u48c3\u81e3\u48c4\u81ea\u48c5\u81f3\u48c6\u81fc\u48c7\u820c\u48c8\u821b\u48c9\u821f\u48ca\u826e\u48cb\u8272\u48cc\u8278\u48cd\u864d\u48ce\u866b\u48cf\u8840\u48d0\u884c\u48d1\u8863\u48d2\u897e\u48d3\u898b\u48d4\u89d2\u48d5\u8a00\u48d6\u8c37\u48d7\u8c46\u48d8\u8c55\u48d9\u8c78\u48da\u8c9d\u48db\u8d64\u48dc\u8d70\u48dd\u8db3\u48de\u8eab\u48df\u8eca\u48e0\u8f9b\u48e1\u8fb0\u48e3\u9091\u48e4\u9149\u48e5\u91c6\u48e6\u91cc\u48e7\u91d1\u48e8\u9577\u48e9\u9580\u48ea\u961c\u48ec\u96b9\u48ed\u96e8\u48ee\u9752\u48ef\u975e\u48f0\u9762\u48f1\u9769\u48f2\u97cb\u48f3\u97ed\u48f4\u97f3\u48f5\u9801\u48f6\u98a8\u48f7\u98db\u48f8\u98df\u48f9\u9996\u48fa\u9999\u48fb\u99ac\u48fc\u9aa8\u48fd\u9ad8\u4941\u9adf\u4942\u9b25\u4943\u9b2f\u4944\u9b32\u4945\u9b3c\u4946\u9b5a\u4947\u9ce5\u4948\u9e75\u4949\u9e7f\u494a\u9ea5\u494b\u9ebb\u494c\u9ec3\u494d\u9ecd\u494e\u9ed1\u494f\u9ef9\u4950\u9efd\u4951\u9f0e\u4952\u9f13\u4953\u9f20\u4954\u9f3b\u4955\u9f4a\u4956\u9f52\u4957\u9f8d\u4958\u9f9c\u4959\u9fa0"_s);
		$var($String, c2bNR, u"\u0015\u0085"_s);
		$init($IBM937$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM937$DecodeHolder::b2cStr, $IBM937$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 254, IBM937$EncodeHolder::c2b, IBM937$EncodeHolder::c2bIndex);
	}
}

IBM937$EncodeHolder::IBM937$EncodeHolder() {
}

$Class* IBM937$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(IBM937$EncodeHolder, name, initialize, &_IBM937$EncodeHolder_ClassInfo_, clinit$IBM937$EncodeHolder, allocate$IBM937$EncodeHolder);
	return class$;
}

$Class* IBM937$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun