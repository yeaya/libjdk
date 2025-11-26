#include <sun/nio/cs/ext/IBM939$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM939$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM939.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM939 = ::sun::nio::cs::ext::IBM939;
using $IBM939$DecodeHolder = ::sun::nio::cs::ext::IBM939$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM939$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM939$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM939$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _IBM939$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IBM939$EncodeHolder::*)()>(&IBM939$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _IBM939$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM939$EncodeHolder", "sun.nio.cs.ext.IBM939", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM939$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM939$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_IBM939$EncodeHolder_FieldInfo_,
	_IBM939$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM939$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM939"
};

$Object* allocate$IBM939$EncodeHolder($Class* clazz) {
	return $of($alloc(IBM939$EncodeHolder));
}

$chars* IBM939$EncodeHolder::c2b = nullptr;
$chars* IBM939$EncodeHolder::c2bIndex = nullptr;

void IBM939$EncodeHolder::init$() {
}

void clinit$IBM939$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM939$EncodeHolder::c2b, $new($chars, 29696));
	$assignStatic(IBM939$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, "%\n"_s);
		$var($String, c2bNR, u"\u0015\u0085\u4260\u2212\u426a\u00a6\u43a1\u301c\u444a\u2014\u446e\uf86f\u447c\u2016\u4c7d\u9e7c\u4eb3\u9830\u4f5e\u5861\u507f\u91ac\u5190\u56ca\u51f1\u6805\u51fa\u91b1\u5261\u9eb4\u52a1\u881f\u52c9\u840a\u52da\u7e61\u52ec\u4fe0\u5353\u8ec0\u5373\u7e6b\u53b3\u8346\u53da\u9a52\u53e8\u87ec\u53ee\u7130\u53f8\u8523\u5443\u5c5b\u5464\u9dd7\u547d\u5699\u5481\u525d\u54a3\u6414\u54a4\u7626\u54ca\u7c1e\u54cd\u6451\u54d4\u555e\u54fa\u6f51\u5550\u7006\u5553\u79b1\u555f\u9eb5\u55c0\u5c62\u55c1\u985a\u5b72\u6522\u5bfe\u688e\u60f1\u7e48\u61b0\u8141\u66c8\u9839\u54d4\u6be1\u5550\u6d00\u52ec\u70ff\u53e8\u841d\u52a1\u841f\u446e\u8f91\u547d\u92ca\u53da\u9b7e"_s);
		$init($IBM939$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM939$DecodeHolder::b2cStr, $IBM939$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 254, IBM939$EncodeHolder::c2b, IBM939$EncodeHolder::c2bIndex);
	}
}

IBM939$EncodeHolder::IBM939$EncodeHolder() {
}

$Class* IBM939$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(IBM939$EncodeHolder, name, initialize, &_IBM939$EncodeHolder_ClassInfo_, clinit$IBM939$EncodeHolder, allocate$IBM939$EncodeHolder);
	return class$;
}

$Class* IBM939$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun