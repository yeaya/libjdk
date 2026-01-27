#include <com/sun/org/apache/bcel/internal/classfile/LineNumber.h>

#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <jcpp.h>

using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _LineNumber_FieldInfo_[] = {
	{"startPc", "S", nullptr, $PRIVATE, $field(LineNumber, startPc)},
	{"lineNumber", "S", nullptr, $PRIVATE, $field(LineNumber, lineNumber)},
	{}
};

$MethodInfo _LineNumber_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/LineNumber;)V", nullptr, $PUBLIC, $method(LineNumber, init$, void, LineNumber*)},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(LineNumber, init$, void, $DataInput*), "java.io.IOException"},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(LineNumber, init$, void, int32_t, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(LineNumber, accept, void, $Visitor*)},
	{"copy", "()Lcom/sun/org/apache/bcel/internal/classfile/LineNumber;", nullptr, $PUBLIC, $method(LineNumber, copy, LineNumber*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $method(LineNumber, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getLineNumber", "()I", nullptr, $PUBLIC, $method(LineNumber, getLineNumber, int32_t)},
	{"getStartPC", "()I", nullptr, $PUBLIC, $method(LineNumber, getStartPC, int32_t)},
	{"setLineNumber", "(I)V", nullptr, $PUBLIC, $method(LineNumber, setLineNumber, void, int32_t)},
	{"setStartPC", "(I)V", nullptr, $PUBLIC, $method(LineNumber, setStartPC, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LineNumber, toString, $String*)},
	{}
};

$ClassInfo _LineNumber_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.LineNumber",
	"java.lang.Object",
	"java.lang.Cloneable,com.sun.org.apache.bcel.internal.classfile.Node",
	_LineNumber_FieldInfo_,
	_LineNumber_MethodInfo_
};

$Object* allocate$LineNumber($Class* clazz) {
	return $of($alloc(LineNumber));
}

int32_t LineNumber::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool LineNumber::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

$Object* LineNumber::clone() {
	 return this->$Cloneable::clone();
}

void LineNumber::finalize() {
	this->$Cloneable::finalize();
}

void LineNumber::init$(LineNumber* c) {
	int32_t var$0 = $nc(c)->getStartPC();
	LineNumber::init$(var$0, c->getLineNumber());
}

void LineNumber::init$($DataInput* file) {
	int32_t var$0 = $nc(file)->readUnsignedShort();
	LineNumber::init$(var$0, file->readUnsignedShort());
}

void LineNumber::init$(int32_t startPc, int32_t lineNumber) {
	this->startPc = (int16_t)startPc;
	this->lineNumber = (int16_t)lineNumber;
}

void LineNumber::accept($Visitor* v) {
	$nc(v)->visitLineNumber(this);
}

void LineNumber::dump($DataOutputStream* file) {
	$nc(file)->writeShort(this->startPc);
	file->writeShort(this->lineNumber);
}

int32_t LineNumber::getLineNumber() {
	return (int32_t)(0x0000FFFF & (uint32_t)(int32_t)this->lineNumber);
}

int32_t LineNumber::getStartPC() {
	return (int32_t)(0x0000FFFF & (uint32_t)(int32_t)this->startPc);
}

void LineNumber::setLineNumber(int32_t lineNumber) {
	this->lineNumber = (int16_t)lineNumber;
}

void LineNumber::setStartPC(int32_t startPc) {
	this->startPc = (int16_t)startPc;
}

$String* LineNumber::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"LineNumber("_s, $$str(this->startPc), ", "_s, $$str(this->lineNumber), ")"_s});
}

LineNumber* LineNumber::copy() {
	try {
		return $cast(LineNumber, clone());
	} catch ($CloneNotSupportedException& e) {
	}
	return nullptr;
}

LineNumber::LineNumber() {
}

$Class* LineNumber::load$($String* name, bool initialize) {
	$loadClass(LineNumber, name, initialize, &_LineNumber_ClassInfo_, allocate$LineNumber);
	return class$;
}

$Class* LineNumber::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com