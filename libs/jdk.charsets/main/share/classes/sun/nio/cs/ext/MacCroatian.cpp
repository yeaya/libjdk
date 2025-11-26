#include <sun/nio/cs/ext/MacCroatian.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/MacCroatian$Holder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $MacCroatian$Holder = ::sun::nio::cs::ext::MacCroatian$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _MacCroatian_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacCroatian::*)()>(&MacCroatian::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MacCroatian_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacCroatian$Holder", "sun.nio.cs.ext.MacCroatian", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacCroatian_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MacCroatian",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MacCroatian_MethodInfo_,
	nullptr,
	nullptr,
	_MacCroatian_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacCroatian$Holder"
};

$Object* allocate$MacCroatian($Class* clazz) {
	return $of($alloc(MacCroatian));
}

int32_t MacCroatian::hashCode() {
	 return this->$Charset::hashCode();
}

bool MacCroatian::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* MacCroatian::toString() {
	 return this->$Charset::toString();
}

$Object* MacCroatian::clone() {
	 return this->$Charset::clone();
}

void MacCroatian::finalize() {
	this->$Charset::finalize();
}

void MacCroatian::init$() {
	$Charset::init$("x-MacCroatian"_s, $($ExtendedCharsets::aliasesFor("x-MacCroatian"_s)));
}

$String* MacCroatian::historicalName() {
	return "MacCroatian"_s;
}

bool MacCroatian::contains($Charset* cs) {
	return ($instanceOf(MacCroatian, cs));
}

$CharsetDecoder* MacCroatian::newDecoder() {
	$init($MacCroatian$Holder);
	return $new($SingleByte$Decoder, this, $MacCroatian$Holder::b2c, false, false);
}

$CharsetEncoder* MacCroatian::newEncoder() {
	$init($MacCroatian$Holder);
	return $new($SingleByte$Encoder, this, $MacCroatian$Holder::c2b, $MacCroatian$Holder::c2bIndex, false);
}

MacCroatian::MacCroatian() {
}

$Class* MacCroatian::load$($String* name, bool initialize) {
	$loadClass(MacCroatian, name, initialize, &_MacCroatian_ClassInfo_, allocate$MacCroatian);
	return class$;
}

$Class* MacCroatian::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun