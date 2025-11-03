#include <sun/nio/cs/ext/JIS_X_0212_MS5022X$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/JIS_X_0212_MS5022X$DecodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0212_MS5022X.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $JIS_X_0212_MS5022X = ::sun::nio::cs::ext::JIS_X_0212_MS5022X;
using $JIS_X_0212_MS5022X$DecodeHolder = ::sun::nio::cs::ext::JIS_X_0212_MS5022X$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _JIS_X_0212_MS5022X$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0212_MS5022X$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0212_MS5022X$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _JIS_X_0212_MS5022X$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JIS_X_0212_MS5022X$EncodeHolder::*)()>(&JIS_X_0212_MS5022X$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _JIS_X_0212_MS5022X$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.JIS_X_0212_MS5022X$EncodeHolder", "sun.nio.cs.ext.JIS_X_0212_MS5022X", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _JIS_X_0212_MS5022X$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.JIS_X_0212_MS5022X$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_JIS_X_0212_MS5022X$EncodeHolder_FieldInfo_,
	_JIS_X_0212_MS5022X$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_JIS_X_0212_MS5022X$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.JIS_X_0212_MS5022X"
};

$Object* allocate$JIS_X_0212_MS5022X$EncodeHolder($Class* clazz) {
	return $of($alloc(JIS_X_0212_MS5022X$EncodeHolder));
}

$chars* JIS_X_0212_MS5022X$EncodeHolder::c2b = nullptr;
$chars* JIS_X_0212_MS5022X$EncodeHolder::c2bIndex = nullptr;

void JIS_X_0212_MS5022X$EncodeHolder::init$() {
}

void clinit$JIS_X_0212_MS5022X$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JIS_X_0212_MS5022X$EncodeHolder::c2b, $new($chars, 24832));
	$assignStatic(JIS_X_0212_MS5022X$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, nullptr);
		$init($JIS_X_0212_MS5022X$DecodeHolder);
		$DoubleByte$Encoder::initC2B($JIS_X_0212_MS5022X$DecodeHolder::b2cStr, $JIS_X_0212_MS5022X$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 33, 126, JIS_X_0212_MS5022X$EncodeHolder::c2b, JIS_X_0212_MS5022X$EncodeHolder::c2bIndex);
	}
}

JIS_X_0212_MS5022X$EncodeHolder::JIS_X_0212_MS5022X$EncodeHolder() {
}

$Class* JIS_X_0212_MS5022X$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(JIS_X_0212_MS5022X$EncodeHolder, name, initialize, &_JIS_X_0212_MS5022X$EncodeHolder_ClassInfo_, clinit$JIS_X_0212_MS5022X$EncodeHolder, allocate$JIS_X_0212_MS5022X$EncodeHolder);
	return class$;
}

$Class* JIS_X_0212_MS5022X$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun