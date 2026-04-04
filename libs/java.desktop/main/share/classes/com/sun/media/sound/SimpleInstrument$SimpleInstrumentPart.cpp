#include <com/sun/media/sound/SimpleInstrument$SimpleInstrumentPart.h>
#include <com/sun/media/sound/ModelPerformer.h>
#include <com/sun/media/sound/SimpleInstrument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SimpleInstrument$SimpleInstrumentPart::init$() {
}

SimpleInstrument$SimpleInstrumentPart::SimpleInstrument$SimpleInstrumentPart() {
}

$Class* SimpleInstrument$SimpleInstrumentPart::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"performers", "[Lcom/sun/media/sound/ModelPerformer;", nullptr, 0, $field(SimpleInstrument$SimpleInstrumentPart, performers)},
		{"keyFrom", "I", nullptr, 0, $field(SimpleInstrument$SimpleInstrumentPart, keyFrom)},
		{"keyTo", "I", nullptr, 0, $field(SimpleInstrument$SimpleInstrumentPart, keyTo)},
		{"velFrom", "I", nullptr, 0, $field(SimpleInstrument$SimpleInstrumentPart, velFrom)},
		{"velTo", "I", nullptr, 0, $field(SimpleInstrument$SimpleInstrumentPart, velTo)},
		{"exclusiveClass", "I", nullptr, 0, $field(SimpleInstrument$SimpleInstrumentPart, exclusiveClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SimpleInstrument$SimpleInstrumentPart, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SimpleInstrument$SimpleInstrumentPart", "com.sun.media.sound.SimpleInstrument", "SimpleInstrumentPart", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SimpleInstrument$SimpleInstrumentPart",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.SimpleInstrument"
	};
	$loadClass(SimpleInstrument$SimpleInstrumentPart, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleInstrument$SimpleInstrumentPart);
	});
	return class$;
}

$Class* SimpleInstrument$SimpleInstrumentPart::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com