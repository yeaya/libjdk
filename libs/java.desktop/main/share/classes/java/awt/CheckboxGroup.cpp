#include <java/awt/CheckboxGroup.h>
#include <java/awt/Checkbox.h>
#include <jcpp.h>

using $Checkbox = ::java::awt::Checkbox;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void CheckboxGroup::init$() {
	$set(this, selectedCheckbox, nullptr);
}

$Checkbox* CheckboxGroup::getSelectedCheckbox() {
	return getCurrent();
}

$Checkbox* CheckboxGroup::getCurrent() {
	return this->selectedCheckbox;
}

void CheckboxGroup::setSelectedCheckbox($Checkbox* box) {
	setCurrent(box);
}

void CheckboxGroup::setCurrent($Checkbox* box) {
	$synchronized(this) {
		if (box != nullptr && box->group != this) {
			return;
		}
		$var($Checkbox, oldChoice, this->selectedCheckbox);
		$set(this, selectedCheckbox, box);
		if (oldChoice != nullptr && oldChoice != box && oldChoice->group == this) {
			oldChoice->setState(false);
		}
		if (box != nullptr && oldChoice != box && !box->getState()) {
			box->setStateInternal(true);
		}
	}
}

$String* CheckboxGroup::toString() {
	return $str({$($of(this)->getClass()->getName()), "[selectedCheckbox="_s, this->selectedCheckbox, "]"_s});
}

CheckboxGroup::CheckboxGroup() {
}

$Class* CheckboxGroup::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"selectedCheckbox", "Ljava/awt/Checkbox;", nullptr, 0, $field(CheckboxGroup, selectedCheckbox)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CheckboxGroup, serialVersionUID)},
		{}
	};
	$CompoundAttribute getCurrentmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute setCurrentmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CheckboxGroup, init$, void)},
		{"getCurrent", "()Ljava/awt/Checkbox;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(CheckboxGroup, getCurrent, $Checkbox*), nullptr, nullptr, getCurrentmethodAnnotations$$},
		{"getSelectedCheckbox", "()Ljava/awt/Checkbox;", nullptr, $PUBLIC, $virtualMethod(CheckboxGroup, getSelectedCheckbox, $Checkbox*)},
		{"setCurrent", "(Ljava/awt/Checkbox;)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, $virtualMethod(CheckboxGroup, setCurrent, void, $Checkbox*), nullptr, nullptr, setCurrentmethodAnnotations$$},
		{"setSelectedCheckbox", "(Ljava/awt/Checkbox;)V", nullptr, $PUBLIC, $virtualMethod(CheckboxGroup, setSelectedCheckbox, void, $Checkbox*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CheckboxGroup, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.CheckboxGroup",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CheckboxGroup, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckboxGroup);
	});
	return class$;
}

$Class* CheckboxGroup::class$ = nullptr;

	} // awt
} // java