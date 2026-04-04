#include <java/rmi/MarshalledObject.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/ObjectInputFilter.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/rmi/MarshalledObject$MarshalledObjectInputStream.h>
#include <java/rmi/MarshalledObject$MarshalledObjectOutputStream.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MarshalledObject$MarshalledObjectInputStream = ::java::rmi::MarshalledObject$MarshalledObjectInputStream;
using $MarshalledObject$MarshalledObjectOutputStream = ::java::rmi::MarshalledObject$MarshalledObjectOutputStream;

namespace java {
	namespace rmi {

void MarshalledObject::init$(Object$* obj) {
	$useLocalObjectStack();
	$set(this, objBytes, nullptr);
	$set(this, locBytes, nullptr);
	$set(this, objectInputFilter, nullptr);
	if (obj == nullptr) {
		this->hash = 13;
		return;
	}
	$var($ByteArrayOutputStream, bout, $new($ByteArrayOutputStream));
	$var($ByteArrayOutputStream, lout, $new($ByteArrayOutputStream));
	$var($MarshalledObject$MarshalledObjectOutputStream, out, $new($MarshalledObject$MarshalledObjectOutputStream, bout, lout));
	out->writeObject(obj);
	out->flush();
	$set(this, objBytes, bout->toByteArray());
	$set(this, locBytes, out->hadAnnotations() ? lout->toByteArray() : ($bytes*)nullptr);
	int32_t h = 0;
	for (int32_t i = 0; i < $nc(this->objBytes)->length; ++i) {
		h = 31 * h + this->objBytes->get(i);
	}
	this->hash = h;
}

void MarshalledObject::readObject($ObjectInputStream* stream) {
	$nc(stream)->defaultReadObject();
	$set(this, objectInputFilter, stream->getObjectInputFilter());
}

$Object* MarshalledObject::get() {
	$useLocalObjectStack();
	if (this->objBytes == nullptr) {
		return nullptr;
	}
	$var($ByteArrayInputStream, bin, $new($ByteArrayInputStream, this->objBytes));
	$var($ByteArrayInputStream, lin, this->locBytes == nullptr ? ($ByteArrayInputStream*)nullptr : $new($ByteArrayInputStream, this->locBytes));
	$var($MarshalledObject$MarshalledObjectInputStream, in, $new($MarshalledObject$MarshalledObjectInputStream, bin, lin, this->objectInputFilter));
	$var($Object, obj, in->readObject());
	in->close();
	return obj;
}

int32_t MarshalledObject::hashCode() {
	return this->hash;
}

bool MarshalledObject::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if (obj != nullptr && $instanceOf(MarshalledObject, obj)) {
		$var(MarshalledObject, other, $cast(MarshalledObject, obj));
		if (this->objBytes == nullptr || other->objBytes == nullptr) {
			return this->objBytes == other->objBytes;
		}
		if ($nc(this->objBytes)->length != $nc(other->objBytes)->length) {
			return false;
		}
		for (int32_t i = 0; i < this->objBytes->length; ++i) {
			if (this->objBytes->get(i) != other->objBytes->get(i)) {
				return false;
			}
		}
		return true;
	} else {
		return false;
	}
}

MarshalledObject::MarshalledObject() {
}

$Class* MarshalledObject::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"objBytes", "[B", nullptr, $PRIVATE, $field(MarshalledObject, objBytes)},
		{"locBytes", "[B", nullptr, $PRIVATE, $field(MarshalledObject, locBytes)},
		{"hash", "I", nullptr, $PRIVATE, $field(MarshalledObject, hash)},
		{"objectInputFilter", "Ljava/io/ObjectInputFilter;", nullptr, $PRIVATE | $TRANSIENT, $field(MarshalledObject, objectInputFilter)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MarshalledObject, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $method(MarshalledObject, init$, void, Object$*), "java.io.IOException"},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MarshalledObject, equals, bool, Object$*)},
		{"get", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $method(MarshalledObject, get, $Object*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MarshalledObject, hashCode, int32_t)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(MarshalledObject, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.rmi.MarshalledObject$MarshalledObjectInputStream", "java.rmi.MarshalledObject", "MarshalledObjectInputStream", $PRIVATE | $STATIC},
		{"java.rmi.MarshalledObject$MarshalledObjectOutputStream", "java.rmi.MarshalledObject", "MarshalledObjectOutputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.rmi.MarshalledObject",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/io/Serializable;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.rmi.MarshalledObject$MarshalledObjectInputStream,java.rmi.MarshalledObject$MarshalledObjectOutputStream"
	};
	$loadClass(MarshalledObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MarshalledObject);
	});
	return class$;
}

$Class* MarshalledObject::class$ = nullptr;

	} // rmi
} // java