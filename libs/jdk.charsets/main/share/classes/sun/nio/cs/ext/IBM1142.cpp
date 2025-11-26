#include <sun/nio/cs/ext/IBM1142.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1142$Holder.h>
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
using $IBM1142$Holder = ::sun::nio::cs::ext::IBM1142$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1142_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1142::*)()>(&IBM1142::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1142_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1142$Holder", "sun.nio.cs.ext.IBM1142", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1142_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1142",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1142_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1142_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1142$Holder"
};

$Object* allocate$IBM1142($Class* clazz) {
	return $of($alloc(IBM1142));
}

int32_t IBM1142::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1142::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1142::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1142::clone() {
	 return this->$Charset::clone();
}

void IBM1142::finalize() {
	this->$Charset::finalize();
}

void IBM1142::init$() {
	$Charset::init$("IBM01142"_s, $($ExtendedCharsets::aliasesFor("IBM01142"_s)));
}

$String* IBM1142::historicalName() {
	return "Cp1142"_s;
}

bool IBM1142::contains($Charset* cs) {
	return ($instanceOf(IBM1142, cs));
}

$CharsetDecoder* IBM1142::newDecoder() {
	$init($IBM1142$Holder);
	return $new($SingleByte$Decoder, this, $IBM1142$Holder::b2c, false, false);
}

$CharsetEncoder* IBM1142::newEncoder() {
	$init($IBM1142$Holder);
	return $new($SingleByte$Encoder, this, $IBM1142$Holder::c2b, $IBM1142$Holder::c2bIndex, false);
}

IBM1142::IBM1142() {
}

$Class* IBM1142::load$($String* name, bool initialize) {
	$loadClass(IBM1142, name, initialize, &_IBM1142_ClassInfo_, allocate$IBM1142);
	return class$;
}

$Class* IBM1142::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun