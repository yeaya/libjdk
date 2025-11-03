#include <sun/nio/cs/ext/IBM1026.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1026$Holder.h>
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
using $IBM1026$Holder = ::sun::nio::cs::ext::IBM1026$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1026_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1026::*)()>(&IBM1026::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1026_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1026$Holder", "sun.nio.cs.ext.IBM1026", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1026_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1026",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1026_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1026_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1026$Holder"
};

$Object* allocate$IBM1026($Class* clazz) {
	return $of($alloc(IBM1026));
}

int32_t IBM1026::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1026::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1026::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1026::clone() {
	 return this->$Charset::clone();
}

void IBM1026::finalize() {
	this->$Charset::finalize();
}

void IBM1026::init$() {
	$Charset::init$("IBM1026"_s, $($ExtendedCharsets::aliasesFor("IBM1026"_s)));
}

$String* IBM1026::historicalName() {
	return "Cp1026"_s;
}

bool IBM1026::contains($Charset* cs) {
	return ($instanceOf(IBM1026, cs));
}

$CharsetDecoder* IBM1026::newDecoder() {
	$init($IBM1026$Holder);
	return $new($SingleByte$Decoder, this, $IBM1026$Holder::b2c, false, false);
}

$CharsetEncoder* IBM1026::newEncoder() {
	$init($IBM1026$Holder);
	return $new($SingleByte$Encoder, this, $IBM1026$Holder::c2b, $IBM1026$Holder::c2bIndex, false);
}

IBM1026::IBM1026() {
}

$Class* IBM1026::load$($String* name, bool initialize) {
	$loadClass(IBM1026, name, initialize, &_IBM1026_ClassInfo_, allocate$IBM1026);
	return class$;
}

$Class* IBM1026::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun