#include <sun/nio/cs/ext/IBM297.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM297$Holder.h>
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
using $IBM297$Holder = ::sun::nio::cs::ext::IBM297$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM297_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM297::*)()>(&IBM297::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM297_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM297$Holder", "sun.nio.cs.ext.IBM297", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM297_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM297",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM297_MethodInfo_,
	nullptr,
	nullptr,
	_IBM297_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM297$Holder"
};

$Object* allocate$IBM297($Class* clazz) {
	return $of($alloc(IBM297));
}

int32_t IBM297::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM297::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM297::toString() {
	 return this->$Charset::toString();
}

$Object* IBM297::clone() {
	 return this->$Charset::clone();
}

void IBM297::finalize() {
	this->$Charset::finalize();
}

void IBM297::init$() {
	$Charset::init$("IBM297"_s, $($ExtendedCharsets::aliasesFor("IBM297"_s)));
}

$String* IBM297::historicalName() {
	return "Cp297"_s;
}

bool IBM297::contains($Charset* cs) {
	return ($instanceOf(IBM297, cs));
}

$CharsetDecoder* IBM297::newDecoder() {
	$init($IBM297$Holder);
	return $new($SingleByte$Decoder, this, $IBM297$Holder::b2c, false, true);
}

$CharsetEncoder* IBM297::newEncoder() {
	$init($IBM297$Holder);
	return $new($SingleByte$Encoder, this, $IBM297$Holder::c2b, $IBM297$Holder::c2bIndex, false);
}

IBM297::IBM297() {
}

$Class* IBM297::load$($String* name, bool initialize) {
	$loadClass(IBM297, name, initialize, &_IBM297_ClassInfo_, allocate$IBM297);
	return class$;
}

$Class* IBM297::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun