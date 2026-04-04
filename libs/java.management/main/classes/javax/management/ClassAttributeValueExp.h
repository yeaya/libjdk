#ifndef _javax_management_ClassAttributeValueExp_h_
#define _javax_management_ClassAttributeValueExp_h_
//$ class javax.management.ClassAttributeValueExp
//$ extends javax.management.AttributeValueExp

#include <javax/management/AttributeValueExp.h>

namespace javax {
	namespace management {
		class ObjectName;
		class ValueExp;
	}
}

namespace javax {
	namespace management {

class ClassAttributeValueExp : public ::javax::management::AttributeValueExp {
	$class(ClassAttributeValueExp, 0, ::javax::management::AttributeValueExp)
public:
	ClassAttributeValueExp();
	static void clinit$(::java::lang::Class* clazz);
	void init$();
	virtual ::javax::management::ValueExp* apply(::javax::management::ObjectName* name) override;
	virtual $Object* getValue(::javax::management::ObjectName* name);
	virtual $String* toString() override;
	static const int64_t oldSerialVersionUID = (int64_t)0xe14acc0398ceb0df;
	static const int64_t newSerialVersionUID = (int64_t)0xf0fc58e41492ea31;
	static int64_t serialVersionUID;
	$String* attr = nullptr;
};

	} // management
} // javax

#endif // _javax_management_ClassAttributeValueExp_h_