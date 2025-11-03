#include <sun/nio/cs/ext/ISO2022.h>

#include <java/nio/charset/Charset.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _ISO2022_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ISO2022::*)($String*,$StringArray*)>(&ISO2022::init$))},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC | $ABSTRACT},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ISO2022_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.ISO2022$Encoder", "sun.nio.cs.ext.ISO2022", "Encoder", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _ISO2022_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.nio.cs.ext.ISO2022",
	"java.nio.charset.Charset",
	nullptr,
	nullptr,
	_ISO2022_MethodInfo_,
	nullptr,
	nullptr,
	_ISO2022_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.ISO2022$Encoder"
};

$Object* allocate$ISO2022($Class* clazz) {
	return $of($alloc(ISO2022));
}

void ISO2022::init$($String* csname, $StringArray* aliases) {
	$Charset::init$(csname, aliases);
}

ISO2022::ISO2022() {
}

$Class* ISO2022::load$($String* name, bool initialize) {
	$loadClass(ISO2022, name, initialize, &_ISO2022_ClassInfo_, allocate$ISO2022);
	return class$;
}

$Class* ISO2022::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun