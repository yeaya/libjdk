#include <javax/management/modelmbean/XMLParseException.h>
#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/security/AccessController.h>
#include <jcpp.h>

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;

namespace javax {
	namespace management {
		namespace modelmbean {

$ObjectStreamFieldArray* XMLParseException::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* XMLParseException::newSerialPersistentFields = nullptr;
int64_t XMLParseException::serialVersionUID = 0;
$ObjectStreamFieldArray* XMLParseException::serialPersistentFields = nullptr;
bool XMLParseException::compat = false;

void XMLParseException::init$() {
	$Exception::init$("XML Parse Exception."_s);
}

void XMLParseException::init$($String* s) {
	$Exception::init$($$str({"XML Parse Exception: "_s, s}));
}

void XMLParseException::init$($Exception* e, $String* s) {
	$useLocalObjectStack();
	$Exception::init$($$str({"XML Parse Exception: "_s, s, ":"_s, $($nc(e)->toString())}));
}

void XMLParseException::readObject($ObjectInputStream* in) {
	$nc(in)->defaultReadObject();
}

void XMLParseException::writeObject($ObjectOutputStream* out) {
	$useLocalObjectStack();
	if (XMLParseException::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("msgStr"_s, $(getMessage()));
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void XMLParseException::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$assignStatic(XMLParseException::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "msgStr"_s, $String::class$)}));
	$assignStatic(XMLParseException::newSerialPersistentFields, $new($ObjectStreamFieldArray, 0));
	XMLParseException::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(act)));
			XMLParseException::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (XMLParseException::compat) {
			$assignStatic(XMLParseException::serialPersistentFields, XMLParseException::oldSerialPersistentFields);
			XMLParseException::serialVersionUID = XMLParseException::oldSerialVersionUID;
		} else {
			$assignStatic(XMLParseException::serialPersistentFields, XMLParseException::newSerialPersistentFields);
			XMLParseException::serialVersionUID = XMLParseException::newSerialVersionUID;
		}
	}
}

XMLParseException::XMLParseException() {
}

XMLParseException::XMLParseException(const XMLParseException& e) : $Exception(e) {
}

void XMLParseException::throw$() {
	throw *this;
}

$Class* XMLParseException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLParseException, oldSerialVersionUID)},
		{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLParseException, newSerialVersionUID)},
		{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLParseException, oldSerialPersistentFields)},
		{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLParseException, newSerialPersistentFields)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLParseException, serialVersionUID)},
		{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLParseException, serialPersistentFields)},
		{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XMLParseException, compat)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XMLParseException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLParseException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLParseException, init$, void, $Exception*, $String*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(XMLParseException, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(XMLParseException, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.modelmbean.XMLParseException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XMLParseException, name, initialize, &classInfo$$, XMLParseException::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XMLParseException);
	});
	return class$;
}

$Class* XMLParseException::class$ = nullptr;

		} // modelmbean
	} // management
} // javax