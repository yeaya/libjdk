#include <java/beans/PropertyEditorSupport.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Vector = ::java::util::Vector;

namespace java {
	namespace beans {

$FieldInfo _PropertyEditorSupport_FieldInfo_[] = {
	{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(PropertyEditorSupport, value)},
	{"source", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(PropertyEditorSupport, source)},
	{"listeners", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/beans/PropertyChangeListener;>;", $PRIVATE, $field(PropertyEditorSupport, listeners)},
	{}
};

$MethodInfo _PropertyEditorSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PropertyEditorSupport, init$, void)},
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(PropertyEditorSupport, init$, void, Object$*)},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PropertyEditorSupport, addPropertyChangeListener, void, $PropertyChangeListener*)},
	{"firePropertyChange", "()V", nullptr, $PUBLIC, $virtualMethod(PropertyEditorSupport, firePropertyChange, void)},
	{"getAsText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PropertyEditorSupport, getAsText, $String*)},
	{"getCustomEditor", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(PropertyEditorSupport, getCustomEditor, $Component*)},
	{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PropertyEditorSupport, getJavaInitializationString, $String*)},
	{"getSource", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PropertyEditorSupport, getSource, $Object*)},
	{"getTags", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PropertyEditorSupport, getTags, $StringArray*)},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PropertyEditorSupport, getValue, $Object*)},
	{"isPaintable", "()Z", nullptr, $PUBLIC, $virtualMethod(PropertyEditorSupport, isPaintable, bool)},
	{"paintValue", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $virtualMethod(PropertyEditorSupport, paintValue, void, $Graphics*, $Rectangle*)},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PropertyEditorSupport, removePropertyChangeListener, void, $PropertyChangeListener*)},
	{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(PropertyEditorSupport, setAsText, void, $String*), "java.lang.IllegalArgumentException"},
	{"setSource", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(PropertyEditorSupport, setSource, void, Object$*)},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(PropertyEditorSupport, setValue, void, Object$*)},
	{"supportsCustomEditor", "()Z", nullptr, $PUBLIC, $virtualMethod(PropertyEditorSupport, supportsCustomEditor, bool)},
	{"unsafeClone", "(Ljava/util/Vector;)Ljava/util/Vector;", "<T:Ljava/lang/Object;>(Ljava/util/Vector<TT;>;)Ljava/util/Vector<TT;>;", $PRIVATE, $method(PropertyEditorSupport, unsafeClone, $Vector*, $Vector*)},
	{}
};

$ClassInfo _PropertyEditorSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.PropertyEditorSupport",
	"java.lang.Object",
	"java.beans.PropertyEditor",
	_PropertyEditorSupport_FieldInfo_,
	_PropertyEditorSupport_MethodInfo_
};

$Object* allocate$PropertyEditorSupport($Class* clazz) {
	return $of($alloc(PropertyEditorSupport));
}

void PropertyEditorSupport::init$() {
	setSource(this);
}

void PropertyEditorSupport::init$(Object$* source) {
	if (source == nullptr) {
		$throwNew($NullPointerException);
	}
	setSource(source);
}

$Object* PropertyEditorSupport::getSource() {
	return $of(this->source);
}

void PropertyEditorSupport::setSource(Object$* source) {
	$set(this, source, source);
}

void PropertyEditorSupport::setValue(Object$* value) {
	$set(this, value, value);
	firePropertyChange();
}

$Object* PropertyEditorSupport::getValue() {
	return $of(this->value);
}

bool PropertyEditorSupport::isPaintable() {
	return false;
}

void PropertyEditorSupport::paintValue($Graphics* gfx, $Rectangle* box) {
}

$String* PropertyEditorSupport::getJavaInitializationString() {
	return "???"_s;
}

$String* PropertyEditorSupport::getAsText() {
	return (this->value != nullptr) ? $nc($of(this->value))->toString() : ($String*)nullptr;
}

void PropertyEditorSupport::setAsText($String* text) {
	if ($instanceOf($String, this->value)) {
		setValue(text);
		return;
	}
	$throwNew($IllegalArgumentException, text);
}

$StringArray* PropertyEditorSupport::getTags() {
	return nullptr;
}

$Component* PropertyEditorSupport::getCustomEditor() {
	return nullptr;
}

bool PropertyEditorSupport::supportsCustomEditor() {
	return false;
}

void PropertyEditorSupport::addPropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this) {
		if (this->listeners == nullptr) {
			$set(this, listeners, $new($Vector));
		}
		$nc(this->listeners)->addElement(listener);
	}
}

void PropertyEditorSupport::removePropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this) {
		if (this->listeners == nullptr) {
			return;
		}
		$nc(this->listeners)->removeElement(listener);
	}
}

void PropertyEditorSupport::firePropertyChange() {
	$useLocalCurrentObjectStackCache();
	$var($Vector, targets, nullptr);
	$synchronized(this) {
		if (this->listeners == nullptr) {
			return;
		}
		$assign(targets, unsafeClone(this->listeners));
	}
	$var($PropertyChangeEvent, evt, $new($PropertyChangeEvent, this->source, nullptr, nullptr, nullptr));
	for (int32_t i = 0; i < $nc(targets)->size(); ++i) {
		$var($PropertyChangeListener, target, $cast($PropertyChangeListener, targets->elementAt(i)));
		$nc(target)->propertyChange(evt);
	}
}

$Vector* PropertyEditorSupport::unsafeClone($Vector* v) {
	return $cast($Vector, $nc(v)->clone());
}

PropertyEditorSupport::PropertyEditorSupport() {
}

$Class* PropertyEditorSupport::load$($String* name, bool initialize) {
	$loadClass(PropertyEditorSupport, name, initialize, &_PropertyEditorSupport_ClassInfo_, allocate$PropertyEditorSupport);
	return class$;
}

$Class* PropertyEditorSupport::class$ = nullptr;

	} // beans
} // java