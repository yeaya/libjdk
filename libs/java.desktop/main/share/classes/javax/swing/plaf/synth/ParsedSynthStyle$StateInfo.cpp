#include <javax/swing/plaf/synth/ParsedSynthStyle$StateInfo.h>
#include <javax/swing/plaf/synth/ParsedSynthStyle$PainterInfo.h>
#include <javax/swing/plaf/synth/ParsedSynthStyle.h>
#include <sun/swing/plaf/synth/DefaultSynthStyle$StateInfo.h>
#include <jcpp.h>

using $ParsedSynthStyle$PainterInfoArray = $Array<::javax::swing::plaf::synth::ParsedSynthStyle$PainterInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParsedSynthStyle = ::javax::swing::plaf::synth::ParsedSynthStyle;
using $DefaultSynthStyle$StateInfo = ::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void ParsedSynthStyle$StateInfo::init$() {
	$DefaultSynthStyle$StateInfo::init$();
}

void ParsedSynthStyle$StateInfo::init$($DefaultSynthStyle$StateInfo* info) {
	$DefaultSynthStyle$StateInfo::init$(info);
	if ($instanceOf(ParsedSynthStyle$StateInfo, info)) {
		$set(this, _painterInfo, $cast(ParsedSynthStyle$StateInfo, info)->_painterInfo);
	}
}

void ParsedSynthStyle$StateInfo::setPainters($ParsedSynthStyle$PainterInfoArray* painterInfo) {
	$set(this, _painterInfo, painterInfo);
}

$ParsedSynthStyle$PainterInfoArray* ParsedSynthStyle$StateInfo::getPainters() {
	return this->_painterInfo;
}

$Object* ParsedSynthStyle$StateInfo::clone() {
	return $new(ParsedSynthStyle$StateInfo, this);
}

$DefaultSynthStyle$StateInfo* ParsedSynthStyle$StateInfo::addTo($DefaultSynthStyle$StateInfo* info$renamed) {
	$useLocalObjectStack();
	$var($DefaultSynthStyle$StateInfo, info, info$renamed);
	if (!($instanceOf(ParsedSynthStyle$StateInfo, info))) {
		$assign(info, $new(ParsedSynthStyle$StateInfo, info));
	} else {
		$assign(info, $DefaultSynthStyle$StateInfo::addTo(info));
		$var(ParsedSynthStyle$StateInfo, si, $cast(ParsedSynthStyle$StateInfo, info));
		$set($nc(si), _painterInfo, $ParsedSynthStyle::mergePainterInfo($nc(si)->_painterInfo, this->_painterInfo));
	}
	return info;
}

$String* ParsedSynthStyle$StateInfo::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, text, $new($StringBuilder, $($DefaultSynthStyle$StateInfo::toString())));
	text->append(",painters=["_s);
	if (this->_painterInfo != nullptr) {
		for (int32_t i = 0; i < +$nc(this->_painterInfo)->length; ++i) {
			text->append("    "_s)->append($($nc(this->_painterInfo->get(i))->toString()));
		}
	}
	text->append("]"_s);
	return text->toString();
}

ParsedSynthStyle$StateInfo::ParsedSynthStyle$StateInfo() {
}

$Class* ParsedSynthStyle$StateInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_painterInfo", "[Ljavax/swing/plaf/synth/ParsedSynthStyle$PainterInfo;", nullptr, $PRIVATE, $field(ParsedSynthStyle$StateInfo, _painterInfo)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ParsedSynthStyle$StateInfo, init$, void)},
		{"<init>", "(Lsun/swing/plaf/synth/DefaultSynthStyle$StateInfo;)V", nullptr, $PUBLIC, $method(ParsedSynthStyle$StateInfo, init$, void, $DefaultSynthStyle$StateInfo*)},
		{"addTo", "(Lsun/swing/plaf/synth/DefaultSynthStyle$StateInfo;)Lsun/swing/plaf/synth/DefaultSynthStyle$StateInfo;", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$StateInfo, addTo, $DefaultSynthStyle$StateInfo*, $DefaultSynthStyle$StateInfo*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$StateInfo, clone, $Object*)},
		{"getPainters", "()[Ljavax/swing/plaf/synth/ParsedSynthStyle$PainterInfo;", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$StateInfo, getPainters, $ParsedSynthStyle$PainterInfoArray*)},
		{"setPainters", "([Ljavax/swing/plaf/synth/ParsedSynthStyle$PainterInfo;)V", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$StateInfo, setPainters, void, $ParsedSynthStyle$PainterInfoArray*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ParsedSynthStyle$StateInfo, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.ParsedSynthStyle$StateInfo", "javax.swing.plaf.synth.ParsedSynthStyle", "StateInfo", $STATIC},
		{"sun.swing.plaf.synth.DefaultSynthStyle$StateInfo", "sun.swing.plaf.synth.DefaultSynthStyle", "StateInfo", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.ParsedSynthStyle$StateInfo",
		"sun.swing.plaf.synth.DefaultSynthStyle$StateInfo",
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
	$loadClass(ParsedSynthStyle$StateInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParsedSynthStyle$StateInfo);
	});
	return class$;
}

$Class* ParsedSynthStyle$StateInfo::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax