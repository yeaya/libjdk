#include <sun/nio/cs/ext/IBM1166.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1166$Holder.h>
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
using $IBM1166$Holder = ::sun::nio::cs::ext::IBM1166$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1166_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1166::*)()>(&IBM1166::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1166_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1166$Holder", "sun.nio.cs.ext.IBM1166", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1166_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1166",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1166_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1166_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1166$Holder"
};

$Object* allocate$IBM1166($Class* clazz) {
	return $of($alloc(IBM1166));
}

int32_t IBM1166::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1166::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1166::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1166::clone() {
	 return this->$Charset::clone();
}

void IBM1166::finalize() {
	this->$Charset::finalize();
}

void IBM1166::init$() {
	$Charset::init$("x-IBM1166"_s, $($ExtendedCharsets::aliasesFor("x-IBM1166"_s)));
}

$String* IBM1166::historicalName() {
	return "Cp1166"_s;
}

bool IBM1166::contains($Charset* cs) {
	return ($instanceOf(IBM1166, cs));
}

$CharsetDecoder* IBM1166::newDecoder() {
	$init($IBM1166$Holder);
	return $new($SingleByte$Decoder, this, $IBM1166$Holder::b2c, false, false);
}

$CharsetEncoder* IBM1166::newEncoder() {
	$init($IBM1166$Holder);
	return $new($SingleByte$Encoder, this, $IBM1166$Holder::c2b, $IBM1166$Holder::c2bIndex, false);
}

IBM1166::IBM1166() {
}

$Class* IBM1166::load$($String* name, bool initialize) {
	$loadClass(IBM1166, name, initialize, &_IBM1166_ClassInfo_, allocate$IBM1166);
	return class$;
}

$Class* IBM1166::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun