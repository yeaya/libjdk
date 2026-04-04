#ifndef _sun_management_MappedMXBeanType$InProgress_h_
#define _sun_management_MappedMXBeanType$InProgress_h_
//$ class sun.management.MappedMXBeanType$InProgress
//$ extends javax.management.openmbean.OpenType

#include <javax/management/openmbean/OpenType.h>

namespace sun {
	namespace management {

class MappedMXBeanType$InProgress : public ::javax::management::openmbean::OpenType {
	$class(MappedMXBeanType$InProgress, 0, ::javax::management::openmbean::OpenType)
public:
	MappedMXBeanType$InProgress();
	static void clinit$(::java::lang::Class* clazz);
	void init$();
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual bool isValue(Object$* o) override;
	virtual $String* toString() override;
	static $String* description;
	static const int64_t serialVersionUID = (int64_t)0xd0a25cda44ed7b26;
};

	} // management
} // sun

#endif // _sun_management_MappedMXBeanType$InProgress_h_