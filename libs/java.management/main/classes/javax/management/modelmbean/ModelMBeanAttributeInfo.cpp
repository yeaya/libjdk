#include <javax/management/modelmbean/ModelMBeanAttributeInfo.h>
#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <javax/management/Descriptor.h>
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanFeatureInfo.h>
#include <javax/management/RuntimeOperationsException.h>
#include <javax/management/modelmbean/DescriptorSupport.h>
#include <jcpp.h>

#undef MODELMBEAN_LOGGER
#undef TRACE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;
using $Descriptor = ::javax::management::Descriptor;
using $MBeanAttributeInfo = ::javax::management::MBeanAttributeInfo;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;
using $DescriptorSupport = ::javax::management::modelmbean::DescriptorSupport;

namespace javax {
	namespace management {
		namespace modelmbean {

bool ModelMBeanAttributeInfo::equals(Object$* o) {
	return this->$MBeanAttributeInfo::equals(o);
}

int32_t ModelMBeanAttributeInfo::hashCode() {
	return this->$MBeanAttributeInfo::hashCode();
}

void ModelMBeanAttributeInfo::finalize() {
	this->$MBeanAttributeInfo::finalize();
}

$ObjectStreamFieldArray* ModelMBeanAttributeInfo::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* ModelMBeanAttributeInfo::newSerialPersistentFields = nullptr;
int64_t ModelMBeanAttributeInfo::serialVersionUID = 0;
$ObjectStreamFieldArray* ModelMBeanAttributeInfo::serialPersistentFields = nullptr;
bool ModelMBeanAttributeInfo::compat = false;
$String* ModelMBeanAttributeInfo::currClass = nullptr;

void ModelMBeanAttributeInfo::init$($String* name, $String* description, $Method* getter, $Method* setter) {
	$MBeanAttributeInfo::init$(name, description, getter, setter);
	$set(this, attrDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$JmxProperties::MODELMBEAN_LOGGER->log($System$Logger$Level::TRACE, $$str({"ModelMBeanAttributeInfo(String,String,Method,Method) Entry "_s, name}));
	}
	$set(this, attrDescriptor, validDescriptor(nullptr));
}

void ModelMBeanAttributeInfo::init$($String* name, $String* description, $Method* getter, $Method* setter, $Descriptor* descriptor) {
	$MBeanAttributeInfo::init$(name, description, getter, setter);
	$set(this, attrDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$JmxProperties::MODELMBEAN_LOGGER->log($System$Logger$Level::TRACE, $$str({"ModelMBeanAttributeInfo(String,String,Method,Method,Descriptor) Entry "_s, name}));
	}
	$set(this, attrDescriptor, validDescriptor(descriptor));
}

void ModelMBeanAttributeInfo::init$($String* name, $String* type, $String* description, bool isReadable, bool isWritable, bool isIs) {
	$useLocalObjectStack();
	$MBeanAttributeInfo::init$(name, type, description, isReadable, isWritable, isIs);
	$set(this, attrDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$JmxProperties::MODELMBEAN_LOGGER->log($System$Logger$Level::TRACE, $(ModelMBeanAttributeInfo::class$->getName()), $$new($ObjectArray, {
			"ModelMBeanAttributeInfo(String,String,String,boolean,boolean,boolean)"_s,
			"Entry"_s,
			name
		}));
	}
	$set(this, attrDescriptor, validDescriptor(nullptr));
}

void ModelMBeanAttributeInfo::init$($String* name, $String* type, $String* description, bool isReadable, bool isWritable, bool isIs, $Descriptor* descriptor) {
	$MBeanAttributeInfo::init$(name, type, description, isReadable, isWritable, isIs);
	$set(this, attrDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$JmxProperties::MODELMBEAN_LOGGER->log($System$Logger$Level::TRACE, $$str({"ModelMBeanAttributeInfo(String,String,String,boolean,boolean,boolean,Descriptor)Entry "_s, name}));
	}
	$set(this, attrDescriptor, validDescriptor(descriptor));
}

void ModelMBeanAttributeInfo::init$(ModelMBeanAttributeInfo* inInfo) {
	$useLocalObjectStack();
	$var($String, var$0, $nc(inInfo)->getName());
	$var($String, var$1, inInfo->getType());
	$var($String, var$2, inInfo->getDescription());
	bool var$3 = inInfo->isReadable();
	bool var$4 = inInfo->isWritable();
	$MBeanAttributeInfo::init$(var$0, var$1, var$2, var$3, var$4, inInfo->isIs());
	$set(this, attrDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$JmxProperties::MODELMBEAN_LOGGER->log($System$Logger$Level::TRACE, "ModelMBeanAttributeInfo(ModelMBeanAttributeInfo) Entry"_s);
	}
	$var($Descriptor, newDesc, inInfo->getDescriptor());
	$set(this, attrDescriptor, validDescriptor(newDesc));
}

$Descriptor* ModelMBeanAttributeInfo::getDescriptor() {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$JmxProperties::MODELMBEAN_LOGGER->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (this->attrDescriptor == nullptr) {
		$set(this, attrDescriptor, validDescriptor(nullptr));
	}
	return $cast($Descriptor, $nc(this->attrDescriptor)->clone());
}

void ModelMBeanAttributeInfo::setDescriptor($Descriptor* inDescriptor) {
	$set(this, attrDescriptor, validDescriptor(inDescriptor));
}

$Object* ModelMBeanAttributeInfo::clone() {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$JmxProperties::MODELMBEAN_LOGGER->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	return ($of($new(ModelMBeanAttributeInfo, this)));
}

$String* ModelMBeanAttributeInfo::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("ModelMBeanAttributeInfo: "_s);
	var$0->append($(this->getName()));
	var$0->append(" ; Description: "_s);
	var$0->append($(this->getDescription()));
	var$0->append(" ; Types: "_s);
	var$0->append($(this->getType()));
	var$0->append(" ; isReadable: "_s);
	var$0->append(this->isReadable());
	var$0->append(" ; isWritable: "_s);
	var$0->append(this->isWritable());
	var$0->append(" ; Descriptor: "_s);
	var$0->append($(this->getDescriptor()));
	return $str(var$0);
}

$Descriptor* ModelMBeanAttributeInfo::validDescriptor($Descriptor* in) {
	$useLocalObjectStack();
	$var($Descriptor, clone, nullptr);
	bool defaulted = (in == nullptr);
	if (defaulted) {
		$assign(clone, $new($DescriptorSupport));
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Null Descriptor, creating new."_s);
	} else {
		$assign(clone, $cast($Descriptor, $nc(in)->clone()));
	}
	if (defaulted && $nc(clone)->getFieldValue("name"_s) == nullptr) {
		clone->setField("name"_s, $(this->getName()));
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Defaulting Descriptor name to "_s, $(this->getName())}));
	}
	if (defaulted && $nc(clone)->getFieldValue("descriptorType"_s) == nullptr) {
		clone->setField("descriptorType"_s, "attribute"_s);
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Defaulting descriptorType to \"attribute\""_s);
	}
	if ($nc(clone)->getFieldValue("displayName"_s) == nullptr) {
		clone->setField("displayName"_s, $(this->getName()));
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Defaulting Descriptor displayName to "_s, $(this->getName())}));
	}
	if (!clone->isValid()) {
		$var($RuntimeException, var$0, $new($IllegalArgumentException, "Invalid Descriptor argument"_s));
		$throwNew($RuntimeOperationsException, var$0, $$str({"The isValid() method of the Descriptor object itself returned false,one or more required fields are invalid. Descriptor:"_s, $(clone->toString())}));
	}
	if (!$$nc(getName())->equalsIgnoreCase($$cast($String, clone->getFieldValue("name"_s)))) {
		$var($RuntimeException, var$1, $new($IllegalArgumentException, "Invalid Descriptor argument"_s));
		$var($StringBuilder, var$2, $new($StringBuilder));
		var$2->append("The Descriptor \"name\" field does not match the object described.  Expected: "_s);
		var$2->append($(this->getName()));
		var$2->append(" , was: "_s);
		var$2->append($(clone->getFieldValue("name"_s)));
		$throwNew($RuntimeOperationsException, var$1, $$str(var$2));
	}
	if (!"attribute"_s->equalsIgnoreCase($$cast($String, clone->getFieldValue("descriptorType"_s)))) {
		$var($RuntimeException, var$3, $new($IllegalArgumentException, "Invalid Descriptor argument"_s));
		$throwNew($RuntimeOperationsException, var$3, $$str({"The Descriptor \"descriptorType\" field does not match the object described.  Expected: \"attribute\" , was: "_s, $(clone->getFieldValue("descriptorType"_s))}));
	}
	return clone;
}

void ModelMBeanAttributeInfo::readObject($ObjectInputStream* in) {
	$nc(in)->defaultReadObject();
}

void ModelMBeanAttributeInfo::writeObject($ObjectOutputStream* out) {
	if (ModelMBeanAttributeInfo::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("attrDescriptor"_s, this->attrDescriptor);
		fields->put("currClass"_s, ModelMBeanAttributeInfo::currClass);
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void ModelMBeanAttributeInfo::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(ModelMBeanAttributeInfo::currClass, "ModelMBeanAttributeInfo"_s);
	$beforeCallerSensitive();
	$load($Descriptor);
	$assignStatic(ModelMBeanAttributeInfo::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "attrDescriptor"_s, $Descriptor::class$),
		$$new($ObjectStreamField, "currClass"_s, $String::class$)
	}));
	$assignStatic(ModelMBeanAttributeInfo::newSerialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "attrDescriptor"_s, $Descriptor::class$)}));
	ModelMBeanAttributeInfo::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(act)));
			ModelMBeanAttributeInfo::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (ModelMBeanAttributeInfo::compat) {
			$assignStatic(ModelMBeanAttributeInfo::serialPersistentFields, ModelMBeanAttributeInfo::oldSerialPersistentFields);
			ModelMBeanAttributeInfo::serialVersionUID = ModelMBeanAttributeInfo::oldSerialVersionUID;
		} else {
			$assignStatic(ModelMBeanAttributeInfo::serialPersistentFields, ModelMBeanAttributeInfo::newSerialPersistentFields);
			ModelMBeanAttributeInfo::serialVersionUID = ModelMBeanAttributeInfo::newSerialVersionUID;
		}
	}
}

ModelMBeanAttributeInfo::ModelMBeanAttributeInfo() {
}

$Class* ModelMBeanAttributeInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ModelMBeanAttributeInfo, oldSerialVersionUID)},
		{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ModelMBeanAttributeInfo, newSerialVersionUID)},
		{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanAttributeInfo, oldSerialPersistentFields)},
		{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanAttributeInfo, newSerialPersistentFields)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanAttributeInfo, serialVersionUID)},
		{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanAttributeInfo, serialPersistentFields)},
		{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(ModelMBeanAttributeInfo, compat)},
		{"attrDescriptor", "Ljavax/management/Descriptor;", nullptr, $PRIVATE, $field(ModelMBeanAttributeInfo, attrDescriptor)},
		{"currClass", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanAttributeInfo, currClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)V", nullptr, $PUBLIC, $method(ModelMBeanAttributeInfo, init$, void, $String*, $String*, $Method*, $Method*), "javax.management.IntrospectionException"},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(ModelMBeanAttributeInfo, init$, void, $String*, $String*, $Method*, $Method*, $Descriptor*), "javax.management.IntrospectionException"},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZZ)V", nullptr, $PUBLIC, $method(ModelMBeanAttributeInfo, init$, void, $String*, $String*, $String*, bool, bool, bool)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZZLjavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(ModelMBeanAttributeInfo, init$, void, $String*, $String*, $String*, bool, bool, bool, $Descriptor*)},
		{"<init>", "(Ljavax/management/modelmbean/ModelMBeanAttributeInfo;)V", nullptr, $PUBLIC, $method(ModelMBeanAttributeInfo, init$, void, ModelMBeanAttributeInfo*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModelMBeanAttributeInfo, clone, $Object*)},
		{"getDescriptor", "()Ljavax/management/Descriptor;", nullptr, $PUBLIC, $virtualMethod(ModelMBeanAttributeInfo, getDescriptor, $Descriptor*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(ModelMBeanAttributeInfo, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"setDescriptor", "(Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $virtualMethod(ModelMBeanAttributeInfo, setDescriptor, void, $Descriptor*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ModelMBeanAttributeInfo, toString, $String*)},
		{"validDescriptor", "(Ljavax/management/Descriptor;)Ljavax/management/Descriptor;", nullptr, $PRIVATE, $method(ModelMBeanAttributeInfo, validDescriptor, $Descriptor*, $Descriptor*), "javax.management.RuntimeOperationsException"},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(ModelMBeanAttributeInfo, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.modelmbean.ModelMBeanAttributeInfo",
		"javax.management.MBeanAttributeInfo",
		"javax.management.DescriptorAccess",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModelMBeanAttributeInfo, name, initialize, &classInfo$$, ModelMBeanAttributeInfo::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ModelMBeanAttributeInfo));
	});
	return class$;
}

$Class* ModelMBeanAttributeInfo::class$ = nullptr;

		} // modelmbean
	} // management
} // javax