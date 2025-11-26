#include <sun/nio/cs/ext/IBM948$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM948$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM948.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM948 = ::sun::nio::cs::ext::IBM948;
using $IBM948$DecodeHolder = ::sun::nio::cs::ext::IBM948$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM948$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM948$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM948$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _IBM948$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IBM948$EncodeHolder::*)()>(&IBM948$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _IBM948$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM948$EncodeHolder", "sun.nio.cs.ext.IBM948", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM948$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM948$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_IBM948$EncodeHolder_FieldInfo_,
	_IBM948$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM948$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM948"
};

$Object* allocate$IBM948$EncodeHolder($Class* clazz) {
	return $of($alloc(IBM948$EncodeHolder));
}

$chars* IBM948$EncodeHolder::c2b = nullptr;
$chars* IBM948$EncodeHolder::c2bIndex = nullptr;

void IBM948$EncodeHolder::init$() {
}

void clinit$IBM948$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM948$EncodeHolder::c2b, $new($chars, 32512));
	$assignStatic(IBM948$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, u"\u8c40\u4e00\u8c41\u4e59\u8c47\u4e8c\u8c48\u4eba\u8c49\u513f\u8c4a\u5165\u8c4b\u516b\u8c4c\u51e0\u8c4d\u5200\u8c4f\u529b\u8c50\u5315\u8c51\u5341\u8c52\u535c\u8c53\u53c8\u8c66\u53e3\u8c67\u571f\u8c68\u58eb\u8c69\u5915\u8c6a\u5927\u8c6b\u5973\u8c6c\u5b50\u8c6f\u5bf8\u8c70\u5c0f\u8c71\u5c22\u8c72\u5c38\u8c73\u5c71\u8c75\u5de5\u8c76\u5df1\u8c79\u5dfe\u8c7a\u5e72\u8c7b\u5efe\u8c7c\u5f0b\u8c7d\u5f13\u8ca9\u5345\u8cbe\u5fc3\u8cbf\u6208\u8cc0\u6236\u8cc1\u624b\u8cc3\u652f\u8cc4\u6587\u8cc5\u6597\u8cc6\u65a4\u8cc7\u65b9\u8cc8\u65e5\u8cc9\u66f0\u8cca\u6708\u8ccb\u6728\u8ccc\u6b20\u8ccd\u6b62\u8cce\u6b79\u8ccf\u6bcb\u8cd0\u6bd4\u8cd1\u6bdb\u8cd2\u6c0f\u8cd3\u6c34\u8cd4\u706b\u8cd5\u722a\u8cd6\u7236\u8cd7\u723b\u8cd8\u7247\u8cd9\u7259\u8cda\u725b\u8cdb\u72ac\u8d88\u7384\u8d89\u7389\u8d8a\u74dc\u8d8b\u74e6\u8d8c\u7518\u8d8d\u751f\u8d8e\u7528\u8d90\u7530\u8d94\u758b\u8d95\u767d\u8d96\u76ae\u8d97\u76bf\u8d98\u76ee\u8d99\u77db\u8d9a\u77e2\u8d9b\u77f3\u8d9c\u793a\u8d9d\u79be\u8d9e\u7a74\u8d9f\u7acb\u8e6b\u7af9\u8e6c\u7c73\u8e6d\u7cf8\u8e6e\u7f36\u8e6f\u7f8a\u8e70\u7fbd\u8e71\u8001\u8e73\u800c\u8e74\u8012\u8e75\u8033\u8e76\u807f\u8e77\u8089\u8e7a\u81e3\u8e7b\u81ea\u8e7c\u81f3\u8e7d\u81fc\u8e7e\u820c\u8e80\u821b\u8e81\u821f\u8e82\u826e\u8e83\u8272\u8e85\u866b\u8e86\u8840\u8e87\u884c\u8e88\u8863\u8fc2\u898b\u8fc3\u89d2\u8fc4\u8a00\u8fc5\u8c37\u8fc6\u8c46\u8fc7\u8c55\u8fc8\u8c9d\u8fc9\u8d64\u8fca\u8d70\u8fcb\u8db3\u8fcc\u8eab\u8fcd\u8eca\u8fce\u8f9b\u8fcf\u8fb0\u8fd5\u9091\u8fda\u9149\u8fdb\u91c6\u8fdc\u91cc\u91d8\u91d1\u91d9\u9577\u91da\u9580\u91db\u961c\u91e1\u96b9\u91e2\u96e8\u91e3\u9752\u91e4\u975e\u93f1\u9762\u93f2\u9769\u93f3\u97cb\u93f4\u97ed\u93f5\u97f3\u93f6\u9801\u93f7\u98a8\u93f8\u98db\u93f9\u98df\u93fa\u9996\u93fb\u9999\u968b\u99ac\u968c\u9aa8\u968d\u9ad8\u968e\u9b25\u968f\u9b32\u9690\u9b3c\u9942\u9b5a\u9943\u9ce5\u9944\u9e75\u9945\u9e7f\u9946\u9ea5\u9947\u9ebb\u9ba5\u9ec3\u9ba6\u9ecd\u9ba7\u9ed1\u9ded\u9f0e\u9dee\u9f13\u9def\u9f20\u9ff9\u9f3b\u9ffa\u9f4a\ua24e\u9f52\ua3bc\u9f8d\ua3bd\u9f9c\ua942\u51f5\ua943\u531a\ua944\u5382\ua949\u56d7\ua94b\u5c6e\ua94c\u5f73\ua95f\u6bb3\ua961\u6c14\ua962\u723f\ua987\u79b8\ua9e7\u7f51\ua9e8\u8278\ua9ed\u864d\ua9ee\u897e\uab44\u8c78\ub26c\u9adf\ub26d\u9b2f\ub975\u9ef9\ubcf5\u9efd\uc962\u9fa0"_s);
		$init($IBM948$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM948$DecodeHolder::b2cStr, $IBM948$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 252, IBM948$EncodeHolder::c2b, IBM948$EncodeHolder::c2bIndex);
	}
}

IBM948$EncodeHolder::IBM948$EncodeHolder() {
}

$Class* IBM948$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(IBM948$EncodeHolder, name, initialize, &_IBM948$EncodeHolder_ClassInfo_, clinit$IBM948$EncodeHolder, allocate$IBM948$EncodeHolder);
	return class$;
}

$Class* IBM948$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun