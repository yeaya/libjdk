#include <java/beans/PropertyEditor.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeListener.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _PropertyEditor_MethodInfo_[] = {
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PropertyEditor, addPropertyChangeListener, void, $PropertyChangeListener*)},
	{"getAsText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PropertyEditor, getAsText, $String*)},
	{"getCustomEditor", "()Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PropertyEditor, getCustomEditor, $Component*)},
	{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PropertyEditor, getJavaInitializationString, $String*)},
	{"getTags", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PropertyEditor, getTags, $StringArray*)},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PropertyEditor, getValue, $Object*)},
	{"isPaintable", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PropertyEditor, isPaintable, bool)},
	{"paintValue", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PropertyEditor, paintValue, void, $Graphics*, $Rectangle*)},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PropertyEditor, removePropertyChangeListener, void, $PropertyChangeListener*)},
	{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PropertyEditor, setAsText, void, $String*), "java.lang.IllegalArgumentException"},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PropertyEditor, setValue, void, Object$*)},
	{"supportsCustomEditor", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PropertyEditor, supportsCustomEditor, bool)},
	{}
};

$ClassInfo _PropertyEditor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.PropertyEditor",
	nullptr,
	nullptr,
	nullptr,
	_PropertyEditor_MethodInfo_
};

$Object* allocate$PropertyEditor($Class* clazz) {
	return $of($alloc(PropertyEditor));
}

$Class* PropertyEditor::load$($String* name, bool initialize) {
	$loadClass(PropertyEditor, name, initialize, &_PropertyEditor_ClassInfo_, allocate$PropertyEditor);
	return class$;
}

$Class* PropertyEditor::class$ = nullptr;

	} // beans
} // java