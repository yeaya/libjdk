#include <sun/nio/cs/ext/IBM1146.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1146$Holder.h>
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
using $IBM1146$Holder = ::sun::nio::cs::ext::IBM1146$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1146_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1146::*)()>(&IBM1146::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1146_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1146$Holder", "sun.nio.cs.ext.IBM1146", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1146_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1146",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1146_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1146_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1146$Holder"
};

$Object* allocate$IBM1146($Class* clazz) {
	return $of($alloc(IBM1146));
}

int32_t IBM1146::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1146::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1146::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1146::clone() {
	 return this->$Charset::clone();
}

void IBM1146::finalize() {
	this->$Charset::finalize();
}

void IBM1146::init$() {
	$Charset::init$("IBM01146"_s, $($ExtendedCharsets::aliasesFor("IBM01146"_s)));
}

$String* IBM1146::historicalName() {
	return "Cp1146"_s;
}

bool IBM1146::contains($Charset* cs) {
	return ($instanceOf(IBM1146, cs));
}

$CharsetDecoder* IBM1146::newDecoder() {
	$init($IBM1146$Holder);
	return $new($SingleByte$Decoder, this, $IBM1146$Holder::b2c, false, false);
}

$CharsetEncoder* IBM1146::newEncoder() {
	$init($IBM1146$Holder);
	return $new($SingleByte$Encoder, this, $IBM1146$Holder::c2b, $IBM1146$Holder::c2bIndex, false);
}

IBM1146::IBM1146() {
}

$Class* IBM1146::load$($String* name, bool initialize) {
	$loadClass(IBM1146, name, initialize, &_IBM1146_ClassInfo_, allocate$IBM1146);
	return class$;
}

$Class* IBM1146::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun