#include <com/sun/beans/editors/EnumEditor.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Enum.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

void EnumEditor::init$($Class* type) {
	$useLocalObjectStack();
	$set(this, listeners, $new($ArrayList));
	$var($ObjectArray, values, $nc(type)->getEnumConstants());
	if (values == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported "_s, type}));
	}
	$set(this, type, type->asSubclass($Enum::class$));
	$set(this, tags, $new($StringArray, $nc(values)->length));
	for (int32_t i = 0; i < values->length; ++i) {
		this->tags->set(i, $($nc($cast($Enum, values->get(i)))->name()));
	}
}

$Object* EnumEditor::getValue() {
	return this->value;
}

void EnumEditor::setValue(Object$* value) {
	$useLocalObjectStack();
	if ((value != nullptr) && !$nc(this->type)->isInstance(value)) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported value: "_s, value}));
	}
	$var($Object, oldValue, nullptr);
	$var($PropertyChangeListenerArray, listeners, nullptr);
	$synchronized(this->listeners) {
		$assign(oldValue, this->value);
		$set(this, value, value);
		if ((value == nullptr) ? oldValue == nullptr : $of(value)->equals(oldValue)) {
			return;
		}
		int32_t size = this->listeners->size();
		if (size == 0) {
			return;
		}
		$assign(listeners, $cast($PropertyChangeListenerArray, this->listeners->toArray($$new($PropertyChangeListenerArray, size))));
	}
	$var($PropertyChangeEvent, event, $new($PropertyChangeEvent, this, nullptr, oldValue, value));
	{
		$var($PropertyChangeListenerArray, arr$, listeners);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($PropertyChangeListener, listener, arr$->get(i$));
			{
				$nc(listener)->propertyChange(event);
			}
		}
	}
}

$String* EnumEditor::getAsText() {
	return (this->value != nullptr) ? $cast($Enum, this->value)->name() : ($String*)nullptr;
}

void EnumEditor::setAsText($String* text) {
	$var($Object, tmp, (text != nullptr) ? $of($Enum::valueOf(this->type, text)) : ($Object*)nullptr);
	setValue(tmp);
}

$StringArray* EnumEditor::getTags() {
	return $cast($StringArray, this->tags->clone());
}

$String* EnumEditor::getJavaInitializationString() {
	$useLocalObjectStack();
	$var($String, name, getAsText());
	return (name != nullptr) ? $str({$($nc(this->type)->getName()), $$str(u'.'), name}) : "null"_s;
}

bool EnumEditor::isPaintable() {
	return false;
}

void EnumEditor::paintValue($Graphics* gfx, $Rectangle* box) {
}

bool EnumEditor::supportsCustomEditor() {
	return false;
}

$Component* EnumEditor::getCustomEditor() {
	return nullptr;
}

void EnumEditor::addPropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this->listeners) {
		this->listeners->add(listener);
	}
}

void EnumEditor::removePropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this->listeners) {
		this->listeners->remove(listener);
	}
}

EnumEditor::EnumEditor() {
}

$Class* EnumEditor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"listeners", "Ljava/util/List;", "Ljava/util/List<Ljava/beans/PropertyChangeListener;>;", $PRIVATE | $FINAL, $field(EnumEditor, listeners)},
		{"type", "Ljava/lang/Class;", "Ljava/lang/Class<+Ljava/lang/Enum;>;", $PRIVATE | $FINAL, $field(EnumEditor, type)},
		{"tags", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(EnumEditor, tags)},
		{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(EnumEditor, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC, $method(EnumEditor, init$, void, $Class*)},
		{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(EnumEditor, addPropertyChangeListener, void, $PropertyChangeListener*)},
		{"getAsText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EnumEditor, getAsText, $String*)},
		{"getCustomEditor", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(EnumEditor, getCustomEditor, $Component*)},
		{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EnumEditor, getJavaInitializationString, $String*)},
		{"getTags", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EnumEditor, getTags, $StringArray*)},
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(EnumEditor, getValue, $Object*)},
		{"isPaintable", "()Z", nullptr, $PUBLIC, $virtualMethod(EnumEditor, isPaintable, bool)},
		{"paintValue", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $virtualMethod(EnumEditor, paintValue, void, $Graphics*, $Rectangle*)},
		{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(EnumEditor, removePropertyChangeListener, void, $PropertyChangeListener*)},
		{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(EnumEditor, setAsText, void, $String*)},
		{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(EnumEditor, setValue, void, Object$*)},
		{"supportsCustomEditor", "()Z", nullptr, $PUBLIC, $virtualMethod(EnumEditor, supportsCustomEditor, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.beans.editors.EnumEditor",
		"java.lang.Object",
		"java.beans.PropertyEditor",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(EnumEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnumEditor);
	});
	return class$;
}

$Class* EnumEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com