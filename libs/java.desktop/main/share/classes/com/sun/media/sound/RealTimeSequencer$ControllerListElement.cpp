#include <com/sun/media/sound/RealTimeSequencer$ControllerListElement.h>
#include <com/sun/media/sound/RealTimeSequencer.h>
#include <javax/sound/midi/ControllerEventListener.h>
#include <jcpp.h>

using $RealTimeSequencer = ::com::sun::media::sound::RealTimeSequencer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ControllerEventListener = ::javax::sound::midi::ControllerEventListener;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void RealTimeSequencer$ControllerListElement::init$($RealTimeSequencer* this$0, $ControllerEventListener* listener, $ints* controllers$renamed) {
	$var($ints, controllers, controllers$renamed);
	$set(this, this$0, this$0);
	$set(this, listener, listener);
	if (controllers == nullptr) {
		$assign(controllers, $new($ints, 128));
		for (int32_t i = 0; i < 128; ++i) {
			controllers->set(i, i);
		}
	}
	$set(this, controllers, controllers);
}

void RealTimeSequencer$ControllerListElement::addControllers($ints* c) {
	$useLocalObjectStack();
	if (c == nullptr) {
		$set(this, controllers, $new($ints, 128));
		for (int32_t i = 0; i < 128; ++i) {
			this->controllers->set(i, i);
		}
		return;
	}
	$var($ints, temp, $new($ints, $nc(this->controllers)->length + $nc(c)->length));
	int32_t elements = 0;
	for (int32_t i = 0; i < this->controllers->length; ++i) {
		temp->set(i, this->controllers->get(i));
	}
	elements = this->controllers->length;
	for (int32_t i = 0; i < c->length; ++i) {
		bool flag = false;
		for (int32_t j = 0; j < this->controllers->length; ++j) {
			if (c->get(i) == this->controllers->get(j)) {
				flag = true;
				break;
			}
		}
		if (!flag) {
			temp->set(elements++, c->get(i));
		}
	}
	$var($ints, newc, $new($ints, elements));
	for (int32_t i = 0; i < elements; ++i) {
		newc->set(i, temp->get(i));
	}
	$set(this, controllers, newc);
}

void RealTimeSequencer$ControllerListElement::removeControllers($ints* c) {
	$useLocalObjectStack();
	if (c == nullptr) {
		$set(this, controllers, $new($ints, 0));
	} else {
		$var($ints, temp, $new($ints, $nc(this->controllers)->length));
		int32_t elements = 0;
		for (int32_t i = 0; i < this->controllers->length; ++i) {
			bool flag = false;
			for (int32_t j = 0; j < c->length; ++j) {
				if (this->controllers->get(i) == c->get(j)) {
					flag = true;
					break;
				}
			}
			if (!flag) {
				temp->set(elements++, this->controllers->get(i));
			}
		}
		$var($ints, newc, $new($ints, elements));
		for (int32_t i = 0; i < elements; ++i) {
			newc->set(i, temp->get(i));
		}
		$set(this, controllers, newc);
	}
}

$ints* RealTimeSequencer$ControllerListElement::getControllers() {
	if (this->controllers == nullptr) {
		return nullptr;
	}
	$var($ints, c, $new($ints, $nc(this->controllers)->length));
	for (int32_t i = 0; i < this->controllers->length; ++i) {
		c->set(i, this->controllers->get(i));
	}
	return c;
}

RealTimeSequencer$ControllerListElement::RealTimeSequencer$ControllerListElement() {
}

$Class* RealTimeSequencer$ControllerListElement::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/RealTimeSequencer;", nullptr, $FINAL | $SYNTHETIC, $field(RealTimeSequencer$ControllerListElement, this$0)},
		{"controllers", "[I", nullptr, 0, $field(RealTimeSequencer$ControllerListElement, controllers)},
		{"listener", "Ljavax/sound/midi/ControllerEventListener;", nullptr, $FINAL, $field(RealTimeSequencer$ControllerListElement, listener)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/RealTimeSequencer;Ljavax/sound/midi/ControllerEventListener;[I)V", nullptr, $PRIVATE, $method(RealTimeSequencer$ControllerListElement, init$, void, $RealTimeSequencer*, $ControllerEventListener*, $ints*)},
		{"addControllers", "([I)V", nullptr, $PRIVATE, $method(RealTimeSequencer$ControllerListElement, addControllers, void, $ints*)},
		{"getControllers", "()[I", nullptr, $PRIVATE, $method(RealTimeSequencer$ControllerListElement, getControllers, $ints*)},
		{"removeControllers", "([I)V", nullptr, $PRIVATE, $method(RealTimeSequencer$ControllerListElement, removeControllers, void, $ints*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.RealTimeSequencer$ControllerListElement", "com.sun.media.sound.RealTimeSequencer", "ControllerListElement", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.RealTimeSequencer$ControllerListElement",
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
		"com.sun.media.sound.RealTimeSequencer"
	};
	$loadClass(RealTimeSequencer$ControllerListElement, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RealTimeSequencer$ControllerListElement);
	});
	return class$;
}

$Class* RealTimeSequencer$ControllerListElement::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com