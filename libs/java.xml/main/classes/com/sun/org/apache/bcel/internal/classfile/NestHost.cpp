#include <com/sun/org/apache/bcel/internal/classfile/NestHost.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_NEST_MEMBERS

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _NestHost_FieldInfo_[] = {
	{"hostClassIndex", "I", nullptr, $PRIVATE, $field(NestHost, hostClassIndex)},
	{}
};

$MethodInfo _NestHost_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/NestHost;)V", nullptr, $PUBLIC, $method(NestHost, init$, void, NestHost*)},
	{"<init>", "(IIILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(NestHost, init$, void, int32_t, int32_t, int32_t, $ConstantPool*)},
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(NestHost, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(NestHost, accept, void, $Visitor*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(NestHost, copy, $Attribute*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(NestHost, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getHostClassIndex", "()I", nullptr, $PUBLIC, $method(NestHost, getHostClassIndex, int32_t)},
	{"setHostClassIndex", "(I)V", nullptr, $PUBLIC, $method(NestHost, setHostClassIndex, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NestHost, toString, $String*)},
	{}
};

$ClassInfo _NestHost_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.NestHost",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_NestHost_FieldInfo_,
	_NestHost_MethodInfo_
};

$Object* allocate$NestHost($Class* clazz) {
	return $of($alloc(NestHost));
}

void NestHost::init$(NestHost* c) {
	int32_t var$0 = $nc(c)->getNameIndex();
	int32_t var$1 = c->getLength();
	int32_t var$2 = c->getHostClassIndex();
	NestHost::init$(var$0, var$1, var$2, $(c->getConstantPool()));
}

void NestHost::init$(int32_t nameIndex, int32_t length, int32_t hostClassIndex, $ConstantPool* constantPool) {
	$Attribute::init$($Const::ATTR_NEST_MEMBERS, nameIndex, length, constantPool);
	this->hostClassIndex = hostClassIndex;
}

void NestHost::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	NestHost::init$(name_index, length, 0, constant_pool);
	this->hostClassIndex = $nc(input)->readUnsignedShort();
}

void NestHost::accept($Visitor* v) {
	$nc(v)->visitNestHost(this);
}

void NestHost::dump($DataOutputStream* file) {
	$Attribute::dump(file);
	$nc(file)->writeShort(this->hostClassIndex);
}

int32_t NestHost::getHostClassIndex() {
	return this->hostClassIndex;
}

void NestHost::setHostClassIndex(int32_t hostClassIndex) {
	this->hostClassIndex = hostClassIndex;
}

$String* NestHost::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append("NestHost: "_s);
	$var($String, class_name, $nc($($Attribute::getConstantPool()))->getConstantString(this->hostClassIndex, $Const::CONSTANT_Class));
	buf->append($($Utility::compactClassName(class_name, false)));
	return buf->toString();
}

$Attribute* NestHost::copy($ConstantPool* _constant_pool) {
	$var(NestHost, c, $cast(NestHost, clone()));
	$nc(c)->setConstantPool(_constant_pool);
	return c;
}

NestHost::NestHost() {
}

$Class* NestHost::load$($String* name, bool initialize) {
	$loadClass(NestHost, name, initialize, &_NestHost_ClassInfo_, allocate$NestHost);
	return class$;
}

$Class* NestHost::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com