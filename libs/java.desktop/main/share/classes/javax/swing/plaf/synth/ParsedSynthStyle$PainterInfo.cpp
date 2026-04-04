#include <javax/swing/plaf/synth/ParsedSynthStyle$PainterInfo.h>
#include <javax/swing/plaf/synth/ParsedSynthStyle$AggregatePainter.h>
#include <javax/swing/plaf/synth/ParsedSynthStyle.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParsedSynthStyle$AggregatePainter = ::javax::swing::plaf::synth::ParsedSynthStyle$AggregatePainter;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void ParsedSynthStyle$PainterInfo::init$($String* method, $SynthPainter* painter, int32_t direction) {
	if (method != nullptr) {
		$set(this, _method, method->intern());
	}
	$set(this, _painter, painter);
	this->_direction = direction;
}

void ParsedSynthStyle$PainterInfo::addPainter($SynthPainter* painter) {
	if (!($instanceOf($ParsedSynthStyle$AggregatePainter, this->_painter))) {
		$set(this, _painter, $new($ParsedSynthStyle$AggregatePainter, this->_painter));
	}
	$nc($cast($ParsedSynthStyle$AggregatePainter, this->_painter))->addPainter(painter);
}

$String* ParsedSynthStyle$PainterInfo::getMethod() {
	return this->_method;
}

$SynthPainter* ParsedSynthStyle$PainterInfo::getPainter() {
	return this->_painter;
}

int32_t ParsedSynthStyle$PainterInfo::getDirection() {
	return this->_direction;
}

bool ParsedSynthStyle$PainterInfo::equalsPainter(ParsedSynthStyle$PainterInfo* info) {
	return (this->_method == $nc(info)->_method && this->_direction == info->_direction);
}

$String* ParsedSynthStyle$PainterInfo::toString() {
	return $str({"PainterInfo {method="_s, this->_method, ",direction="_s, $$str(this->_direction), ",painter="_s, this->_painter, "}"_s});
}

ParsedSynthStyle$PainterInfo::ParsedSynthStyle$PainterInfo() {
}

$Class* ParsedSynthStyle$PainterInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_method", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ParsedSynthStyle$PainterInfo, _method)},
		{"_painter", "Ljavax/swing/plaf/synth/SynthPainter;", nullptr, $PRIVATE, $field(ParsedSynthStyle$PainterInfo, _painter)},
		{"_direction", "I", nullptr, $PRIVATE, $field(ParsedSynthStyle$PainterInfo, _direction)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljavax/swing/plaf/synth/SynthPainter;I)V", nullptr, 0, $method(ParsedSynthStyle$PainterInfo, init$, void, $String*, $SynthPainter*, int32_t)},
		{"addPainter", "(Ljavax/swing/plaf/synth/SynthPainter;)V", nullptr, 0, $virtualMethod(ParsedSynthStyle$PainterInfo, addPainter, void, $SynthPainter*)},
		{"equalsPainter", "(Ljavax/swing/plaf/synth/ParsedSynthStyle$PainterInfo;)Z", nullptr, 0, $virtualMethod(ParsedSynthStyle$PainterInfo, equalsPainter, bool, ParsedSynthStyle$PainterInfo*)},
		{"getDirection", "()I", nullptr, 0, $virtualMethod(ParsedSynthStyle$PainterInfo, getDirection, int32_t)},
		{"getMethod", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(ParsedSynthStyle$PainterInfo, getMethod, $String*)},
		{"getPainter", "()Ljavax/swing/plaf/synth/SynthPainter;", nullptr, 0, $virtualMethod(ParsedSynthStyle$PainterInfo, getPainter, $SynthPainter*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$PainterInfo, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.ParsedSynthStyle$PainterInfo", "javax.swing.plaf.synth.ParsedSynthStyle", "PainterInfo", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.ParsedSynthStyle$PainterInfo",
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
		"javax.swing.plaf.synth.ParsedSynthStyle"
	};
	$loadClass(ParsedSynthStyle$PainterInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParsedSynthStyle$PainterInfo);
	});
	return class$;
}

$Class* ParsedSynthStyle$PainterInfo::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax