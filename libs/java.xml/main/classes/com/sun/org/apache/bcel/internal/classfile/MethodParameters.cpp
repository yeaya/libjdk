#include <com/sun/org/apache/bcel/internal/classfile/MethodParameters.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/MethodParameter.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_METHOD_PARAMETERS

using $MethodParameterArray = $Array<::com::sun::org::apache::bcel::internal::classfile::MethodParameter>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $MethodParameter = ::com::sun::org::apache::bcel::internal::classfile::MethodParameter;
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

void MethodParameters::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	$useLocalObjectStack();
	$Attribute::init$($Const::ATTR_METHOD_PARAMETERS, name_index, length, constant_pool);
	$set(this, parameters, $new($MethodParameterArray, 0));
	int32_t parameters_count = $nc(input)->readUnsignedByte();
	$set(this, parameters, $new($MethodParameterArray, parameters_count));
	for (int32_t i = 0; i < parameters_count; ++i) {
		this->parameters->set(i, $$new($MethodParameter, input));
	}
}

$MethodParameterArray* MethodParameters::getParameters() {
	return this->parameters;
}

void MethodParameters::setParameters($MethodParameterArray* parameters) {
	$set(this, parameters, parameters);
}

void MethodParameters::accept($Visitor* v) {
	$nc(v)->visitMethodParameters(this);
}

$Attribute* MethodParameters::copy($ConstantPool* _constant_pool) {
	$useLocalObjectStack();
	$var(MethodParameters, c, $cast(MethodParameters, clone()));
	$set($nc(c), parameters, $new($MethodParameterArray, $nc(this->parameters)->length));
	for (int32_t i = 0; i < $nc(this->parameters)->length; ++i) {
		$nc(c->parameters)->set(i, $($nc(this->parameters->get(i))->copy()));
	}
	c->setConstantPool(_constant_pool);
	return c;
}

void MethodParameters::dump($DataOutputStream* file) {
	$useLocalObjectStack();
	$Attribute::dump(file);
	$nc(file)->writeByte($nc(this->parameters)->length);
	{
		$var($MethodParameterArray, arr$, this->parameters);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($MethodParameter, parameter, arr$->get(i$));
			{
				$nc(parameter)->dump(file);
			}
		}
	}
}

MethodParameters::MethodParameters() {
}

$Class* MethodParameters::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"parameters", "[Lcom/sun/org/apache/bcel/internal/classfile/MethodParameter;", nullptr, $PRIVATE, $field(MethodParameters, parameters)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(MethodParameters, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
		{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(MethodParameters, accept, void, $Visitor*)},
		{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(MethodParameters, copy, $Attribute*, $ConstantPool*)},
		{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(MethodParameters, dump, void, $DataOutputStream*), "java.io.IOException"},
		{"getParameters", "()[Lcom/sun/org/apache/bcel/internal/classfile/MethodParameter;", nullptr, $PUBLIC, $virtualMethod(MethodParameters, getParameters, $MethodParameterArray*)},
		{"setParameters", "([Lcom/sun/org/apache/bcel/internal/classfile/MethodParameter;)V", nullptr, $PUBLIC, $virtualMethod(MethodParameters, setParameters, void, $MethodParameterArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.classfile.MethodParameters",
		"com.sun.org.apache.bcel.internal.classfile.Attribute",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MethodParameters, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MethodParameters));
	});
	return class$;
}

$Class* MethodParameters::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com