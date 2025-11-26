#include <sun/nio/cs/ext/IBM1381$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM1381$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM1381.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM1381 = ::sun::nio::cs::ext::IBM1381;
using $IBM1381$DecodeHolder = ::sun::nio::cs::ext::IBM1381$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM1381$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM1381$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM1381$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _IBM1381$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IBM1381$EncodeHolder::*)()>(&IBM1381$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _IBM1381$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1381$EncodeHolder", "sun.nio.cs.ext.IBM1381", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM1381$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM1381$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_IBM1381$EncodeHolder_FieldInfo_,
	_IBM1381$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1381$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1381"
};

$Object* allocate$IBM1381$EncodeHolder($Class* clazz) {
	return $of($alloc(IBM1381$EncodeHolder));
}

$chars* IBM1381$EncodeHolder::c2b = nullptr;
$chars* IBM1381$EncodeHolder::c2bIndex = nullptr;

void IBM1381$EncodeHolder::init$() {
}

void clinit$IBM1381$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM1381$EncodeHolder::c2b, $new($chars, 27392));
	$assignStatic(IBM1381$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, u"\ua1aa\u2014\ua1a4\u00b7\ua1a4\u7ac2"_s);
		$init($IBM1381$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM1381$DecodeHolder::b2cStr, $IBM1381$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 161, 254, IBM1381$EncodeHolder::c2b, IBM1381$EncodeHolder::c2bIndex);
	}
}

IBM1381$EncodeHolder::IBM1381$EncodeHolder() {
}

$Class* IBM1381$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(IBM1381$EncodeHolder, name, initialize, &_IBM1381$EncodeHolder_ClassInfo_, clinit$IBM1381$EncodeHolder, allocate$IBM1381$EncodeHolder);
	return class$;
}

$Class* IBM1381$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun