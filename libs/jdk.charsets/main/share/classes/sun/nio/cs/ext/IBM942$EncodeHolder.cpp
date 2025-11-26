#include <sun/nio/cs/ext/IBM942$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM942$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM942.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM942 = ::sun::nio::cs::ext::IBM942;
using $IBM942$DecodeHolder = ::sun::nio::cs::ext::IBM942$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM942$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM942$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM942$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _IBM942$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IBM942$EncodeHolder::*)()>(&IBM942$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _IBM942$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM942$EncodeHolder", "sun.nio.cs.ext.IBM942", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM942$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM942$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_IBM942$EncodeHolder_FieldInfo_,
	_IBM942$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM942$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM942"
};

$Object* allocate$IBM942$EncodeHolder($Class* clazz) {
	return $of($alloc(IBM942$EncodeHolder));
}

$chars* IBM942$EncodeHolder::c2b = nullptr;
$chars* IBM942$EncodeHolder::c2bIndex = nullptr;

void IBM942$EncodeHolder::init$() {
}

void clinit$IBM942$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM942$EncodeHolder::c2b, $new($chars, 27136));
	$assignStatic(IBM942$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, u"\u90e4\u551e\u93c0\u6d00\u91cb\u6f1e\u8ba0\u70ff\u88a0\u8741\ufa59\u8f91\u8a9a\u92ca\u815c\u2015\u8160\uff5e\u8161\u2225\u817c\uff0d\u88a0\u555e\u898b\u7130\u89a8\u9dd7\u8a9a\u5699\u8ba0\u4fe0\u8beb\u8ec0\u8c71\u7e6b\u8c74\u8346\u8cb2\u9e7c\u8d8d\u9eb4\u8df2\u6805\u8ec6\u5c62\u8f4a\u7e61\u8fd3\u8523\u8fdd\u91ac\u90e4\u87ec\u917e\u6414\u9189\u7626\u91cb\u9a52\u925c\u7c1e\u92cd\u6451\u9355\u5861\u935e\u985a\u9398\u79b1\u93c0\u7006\u9458\u56ca\u948d\u525d\u94ac\u6f51\u94ae\u91b1\u966a\u9830\u96cb\u9eb5\u9789\u840a\u9858\u881f\u9ba0\u5c5b\u9db7\u6522\u9e94\u688e\ue379\u7e48\ue445\u8141\ue8f6\u9839\ufa55\uffe4\ufa59\uf86f"_s);
		$init($IBM942$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM942$DecodeHolder::b2cStr, $IBM942$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 252, IBM942$EncodeHolder::c2b, IBM942$EncodeHolder::c2bIndex);
	}
}

IBM942$EncodeHolder::IBM942$EncodeHolder() {
}

$Class* IBM942$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(IBM942$EncodeHolder, name, initialize, &_IBM942$EncodeHolder_ClassInfo_, clinit$IBM942$EncodeHolder, allocate$IBM942$EncodeHolder);
	return class$;
}

$Class* IBM942$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun