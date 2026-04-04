#include <javax/accessibility/AccessibleStateSet.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleState.h>
#include <jcpp.h>

using $AccessibleStateArray = $Array<::javax::accessibility::AccessibleState>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AccessibleState = ::javax::accessibility::AccessibleState;

namespace javax {
	namespace accessibility {

void AccessibleStateSet::init$() {
	$set(this, states, nullptr);
	$set(this, states, nullptr);
}

void AccessibleStateSet::init$($AccessibleStateArray* states) {
	$set(this, states, nullptr);
	if ($nc(states)->length != 0) {
		$set(this, states, $new($Vector, states->length));
		for (int32_t i = 0; i < states->length; ++i) {
			if (!this->states->contains(states->get(i))) {
				this->states->addElement(states->get(i));
			}
		}
	}
}

bool AccessibleStateSet::add($AccessibleState* state) {
	if (this->states == nullptr) {
		$set(this, states, $new($Vector));
	}
	if (!$nc(this->states)->contains(state)) {
		this->states->addElement(state);
		return true;
	} else {
		return false;
	}
}

void AccessibleStateSet::addAll($AccessibleStateArray* states) {
	if ($nc(states)->length != 0) {
		if (this->states == nullptr) {
			$set(this, states, $new($Vector, states->length));
		}
		for (int32_t i = 0; i < states->length; ++i) {
			if (!$nc(this->states)->contains(states->get(i))) {
				this->states->addElement(states->get(i));
			}
		}
	}
}

bool AccessibleStateSet::remove($AccessibleState* state) {
	if (this->states == nullptr) {
		return false;
	} else {
		return this->states->removeElement(state);
	}
}

void AccessibleStateSet::clear() {
	if (this->states != nullptr) {
		this->states->removeAllElements();
	}
}

bool AccessibleStateSet::contains($AccessibleState* state) {
	if (this->states == nullptr) {
		return false;
	} else {
		return this->states->contains(state);
	}
}

$AccessibleStateArray* AccessibleStateSet::toArray() {
	$useLocalObjectStack();
	if (this->states == nullptr) {
		return $new($AccessibleStateArray, 0);
	} else {
		$var($AccessibleStateArray, stateArray, $new($AccessibleStateArray, this->states->size()));
		for (int32_t i = 0; i < stateArray->length; ++i) {
			stateArray->set(i, $$cast($AccessibleState, this->states->elementAt(i)));
		}
		return stateArray;
	}
}

$String* AccessibleStateSet::toString() {
	$useLocalObjectStack();
	$var($String, ret, nullptr);
	if ((this->states != nullptr) && (this->states->size() > 0)) {
		$assign(ret, $$sure($AccessibleState, this->states->elementAt(0))->toDisplayString());
		for (int32_t i = 1; i < $nc(this->states)->size(); ++i) {
			$assign(ret, $str({ret, ","_s, $($$sure($AccessibleState, this->states->elementAt(i))->toDisplayString())}));
		}
	}
	return ret;
}

AccessibleStateSet::AccessibleStateSet() {
}

$Class* AccessibleStateSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"states", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/accessibility/AccessibleState;>;", $PROTECTED, $field(AccessibleStateSet, states)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AccessibleStateSet, init$, void)},
		{"<init>", "([Ljavax/accessibility/AccessibleState;)V", nullptr, $PUBLIC, $method(AccessibleStateSet, init$, void, $AccessibleStateArray*)},
		{"add", "(Ljavax/accessibility/AccessibleState;)Z", nullptr, $PUBLIC, $virtualMethod(AccessibleStateSet, add, bool, $AccessibleState*)},
		{"addAll", "([Ljavax/accessibility/AccessibleState;)V", nullptr, $PUBLIC, $virtualMethod(AccessibleStateSet, addAll, void, $AccessibleStateArray*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(AccessibleStateSet, clear, void)},
		{"contains", "(Ljavax/accessibility/AccessibleState;)Z", nullptr, $PUBLIC, $virtualMethod(AccessibleStateSet, contains, bool, $AccessibleState*)},
		{"remove", "(Ljavax/accessibility/AccessibleState;)Z", nullptr, $PUBLIC, $virtualMethod(AccessibleStateSet, remove, bool, $AccessibleState*)},
		{"toArray", "()[Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC, $virtualMethod(AccessibleStateSet, toArray, $AccessibleStateArray*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AccessibleStateSet, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.accessibility.AccessibleStateSet",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AccessibleStateSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleStateSet);
	});
	return class$;
}

$Class* AccessibleStateSet::class$ = nullptr;

	} // accessibility
} // javax