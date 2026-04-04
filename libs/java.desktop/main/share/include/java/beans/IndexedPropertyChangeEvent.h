#ifndef _java_beans_IndexedPropertyChangeEvent_h_
#define _java_beans_IndexedPropertyChangeEvent_h_
//$ class java.beans.IndexedPropertyChangeEvent
//$ extends java.beans.PropertyChangeEvent

#include <java/beans/PropertyChangeEvent.h>

namespace java {
	namespace lang {
		class StringBuilder;
	}
}

namespace java {
	namespace beans {

class $import IndexedPropertyChangeEvent : public ::java::beans::PropertyChangeEvent {
	$class(IndexedPropertyChangeEvent, $NO_CLASS_INIT, ::java::beans::PropertyChangeEvent)
public:
	IndexedPropertyChangeEvent();
	void init$(Object$* source, $String* propertyName, Object$* oldValue, Object$* newValue, int32_t index);
	virtual void appendTo(::java::lang::StringBuilder* sb) override;
	virtual int32_t getIndex();
	static const int64_t serialVersionUID = (int64_t)0xfb8e52d50d13e66a;
	int32_t index = 0;
};

	} // beans
} // java

#endif // _java_beans_IndexedPropertyChangeEvent_h_