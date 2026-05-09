#include <javax/sql/rowset/serial/SerialJavaObject.h>
#include <java/io/IOException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/InternalError.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Modifier.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Vector.h>
#include <javax/sql/rowset/RowSetWarning.h>
#include <javax/sql/rowset/serial/SerialException.h>
#include <jdk/internal/reflect/Reflection.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef STATIC

using $FieldArray = $Array<::java::lang::reflect::Field>;
using $IOException = ::java::io::IOException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Field = ::java::lang::reflect::Field;
using $Modifier = ::java::lang::reflect::Modifier;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Arrays = ::java::util::Arrays;
using $Vector = ::java::util::Vector;
using $RowSetWarning = ::javax::sql::rowset::RowSetWarning;
using $SerialException = ::javax::sql::rowset::serial::SerialException;
using $Reflection = ::jdk::internal::reflect::Reflection;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace sql {
		namespace rowset {
			namespace serial {

$String* SerialJavaObject::toString() {
	return this->$Serializable::toString();
}

void SerialJavaObject::finalize() {
	this->$Serializable::finalize();
}

void SerialJavaObject::init$(Object$* obj) {
	$beforeCallerSensitive();
	$Class* c = $nc($of(obj))->getClass();
	if (!($instanceOf($Serializable, obj))) {
		setWarning($$new($RowSetWarning, "Warning, the object passed to the constructor does not implement Serializable"_s));
	}
	$set(this, fields, c->getFields());
	if (hasStaticFields(this->fields)) {
		$throwNew($SerialException, "Located static fields in object instance. Cannot serialize"_s);
	}
	$set(this, obj, obj);
}

$Object* SerialJavaObject::getObject() {
	return this->obj;
}

$FieldArray* SerialJavaObject::getFields() {
	$useLocalObjectStack();
	if (this->fields != nullptr) {
		$Class* c = $nc(this->obj)->getClass();
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			$Class* caller = $Reflection::getCallerClass();
			$var($ClassLoader, var$0, $nc(caller)->getClassLoader());
			if ($ReflectUtil::needsPackageAccessCheck(var$0, $(c->getClassLoader()))) {
				$ReflectUtil::checkPackageAccess(c);
			}
		}
		return c->getFields();
	} else {
		$throwNew($SerialException, "SerialJavaObject does not contain a serialized object instance"_s);
	}
}

bool SerialJavaObject::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	if ($instanceOf(SerialJavaObject, o)) {
		$var(SerialJavaObject, sjo, $cast(SerialJavaObject, o));
		return $nc(this->obj)->equals(sjo->obj);
	}
	return false;
}

int32_t SerialJavaObject::hashCode() {
	return 31 + $nc(this->obj)->hashCode();
}

$Object* SerialJavaObject::clone() {
	try {
		$var(SerialJavaObject, sjo, $cast(SerialJavaObject, $Serializable::clone()));
		$set($nc(sjo), fields, $cast($FieldArray, $Arrays::copyOf(this->fields, $nc(this->fields)->length)));
		if (this->chain != nullptr) {
			$set(sjo, chain, $new($Vector, $cast($AbstractCollection, this->chain)));
		}
		return $of(sjo);
	} catch ($CloneNotSupportedException& ex) {
		$throwNew($InternalError);
	}
	$shouldNotReachHere();
}

void SerialJavaObject::setWarning($RowSetWarning* e) {
	if (this->chain == nullptr) {
		$set(this, chain, $new($Vector));
	}
	$nc(this->chain)->add(e);
}

void SerialJavaObject::readObject($ObjectInputStream* s) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ObjectInputStream$GetField, fields1, $nc(s)->readFields());
	$var($Vector, tmp, $cast($Vector, $nc(fields1)->get("chain"_s, nullptr)));
	if (tmp != nullptr) {
		$set(this, chain, $new($Vector, $cast($AbstractCollection, tmp)));
	}
	$set(this, obj, fields1->get("obj"_s, nullptr));
	if (this->obj != nullptr) {
		$set(this, fields, this->obj->getClass()->getFields());
		if (hasStaticFields(this->fields)) {
			$throwNew($IOException, "Located static fields in object instance. Cannot serialize"_s);
		}
	} else {
		$throwNew($IOException, "Object cannot be null!"_s);
	}
}

void SerialJavaObject::writeObject($ObjectOutputStream* s) {
	$var($ObjectOutputStream$PutField, fields, $nc(s)->putFields());
	$nc(fields)->put("obj"_s, this->obj);
	fields->put("chain"_s, this->chain);
	s->writeFields();
}

bool SerialJavaObject::hasStaticFields($FieldArray* fields) {
	$init(SerialJavaObject);
	$useLocalObjectStack();
	$var($FieldArray, arr$, fields);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($Field, field, arr$->get(i$));
		if ($nc(field)->getModifiers() == $Modifier::STATIC) {
			return true;
		}
	}
	return false;
}

SerialJavaObject::SerialJavaObject() {
}

$Class* SerialJavaObject::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"obj", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(SerialJavaObject, obj)},
		{"fields", "[Ljava/lang/reflect/Field;", nullptr, $PRIVATE | $TRANSIENT, $field(SerialJavaObject, fields)},
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SerialJavaObject, serialVersionUID)},
		{"chain", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/sql/rowset/RowSetWarning;>;", 0, $field(SerialJavaObject, chain)},
		{}
	};
	$CompoundAttribute getFieldsmethodAnnotations$$[] = {
		{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(SerialJavaObject, init$, void, Object$*), "javax.sql.rowset.serial.SerialException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SerialJavaObject, clone, $Object*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SerialJavaObject, equals, bool, Object$*)},
		{"getFields", "()[Ljava/lang/reflect/Field;", nullptr, $PUBLIC, $virtualMethod(SerialJavaObject, getFields, $FieldArray*), "javax.sql.rowset.serial.SerialException", nullptr, getFieldsmethodAnnotations$$},
		{"getObject", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SerialJavaObject, getObject, $Object*), "javax.sql.rowset.serial.SerialException"},
		{"hasStaticFields", "([Ljava/lang/reflect/Field;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(SerialJavaObject, hasStaticFields, bool, $FieldArray*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(SerialJavaObject, hashCode, int32_t)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(SerialJavaObject, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"setWarning", "(Ljavax/sql/rowset/RowSetWarning;)V", nullptr, $PRIVATE, $method(SerialJavaObject, setWarning, void, $RowSetWarning*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(SerialJavaObject, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sql.rowset.serial.SerialJavaObject",
		"java.lang.Object",
		"java.io.Serializable,java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SerialJavaObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SerialJavaObject));
	});
	return class$;
}

$Class* SerialJavaObject::class$ = nullptr;

			} // serial
		} // rowset
	} // sql
} // javax