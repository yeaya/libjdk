#include <com/sun/org/apache/bcel/internal/generic/ArrayElementValueGen.h>

#include <com/sun/org/apache/bcel/internal/classfile/ArrayElementValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ElementValueGen.h>
#include <java/io/DataOutputStream.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ARRAY

using $ElementValueArray = $Array<::com::sun::org::apache::bcel::internal::classfile::ElementValue>;
using $ArrayElementValue = ::com::sun::org::apache::bcel::internal::classfile::ArrayElementValue;
using $ElementValue = ::com::sun::org::apache::bcel::internal::classfile::ElementValue;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ElementValueGen = ::com::sun::org::apache::bcel::internal::generic::ElementValueGen;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _ArrayElementValueGen_FieldInfo_[] = {
	{"evalues", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/ElementValueGen;>;", $PRIVATE | $FINAL, $field(ArrayElementValueGen, evalues)},
	{}
};

$MethodInfo _ArrayElementValueGen_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(ArrayElementValueGen, init$, void, $ConstantPoolGen*)},
	{"<init>", "(I[Lcom/sun/org/apache/bcel/internal/classfile/ElementValue;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(ArrayElementValueGen, init$, void, int32_t, $ElementValueArray*, $ConstantPoolGen*)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ArrayElementValue;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Z)V", nullptr, $PUBLIC, $method(ArrayElementValueGen, init$, void, $ArrayElementValue*, $ConstantPoolGen*, bool)},
	{"addElement", "(Lcom/sun/org/apache/bcel/internal/generic/ElementValueGen;)V", nullptr, $PUBLIC, $virtualMethod(ArrayElementValueGen, addElement, void, $ElementValueGen*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ArrayElementValueGen, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getElementValue", "()Lcom/sun/org/apache/bcel/internal/classfile/ElementValue;", nullptr, $PUBLIC, $virtualMethod(ArrayElementValueGen, getElementValue, $ElementValue*)},
	{"getElementValues", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/ElementValueGen;>;", $PUBLIC, $virtualMethod(ArrayElementValueGen, getElementValues, $List*)},
	{"getElementValuesSize", "()I", nullptr, $PUBLIC, $virtualMethod(ArrayElementValueGen, getElementValuesSize, int32_t)},
	{"stringifyValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ArrayElementValueGen, stringifyValue, $String*)},
	{}
};

$ClassInfo _ArrayElementValueGen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ArrayElementValueGen",
	"com.sun.org.apache.bcel.internal.generic.ElementValueGen",
	nullptr,
	_ArrayElementValueGen_FieldInfo_,
	_ArrayElementValueGen_MethodInfo_
};

$Object* allocate$ArrayElementValueGen($Class* clazz) {
	return $of($alloc(ArrayElementValueGen));
}

void ArrayElementValueGen::init$($ConstantPoolGen* cp) {
	$ElementValueGen::init$($ElementValueGen::ARRAY, cp);
	$set(this, evalues, $new($ArrayList));
}

void ArrayElementValueGen::init$(int32_t type, $ElementValueArray* datums, $ConstantPoolGen* cpool) {
	$useLocalCurrentObjectStackCache();
	$ElementValueGen::init$(type, cpool);
	if (type != $ElementValueGen::ARRAY) {
		$throwNew($IllegalArgumentException, $$str({"Only element values of type array can be built with this ctor - type specified: "_s, $$str(type)}));
	}
	$set(this, evalues, $new($ArrayList));
	{
		$var($ElementValueArray, arr$, datums);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ElementValue, datum, arr$->get(i$));
			{
				$nc(this->evalues)->add($($ElementValueGen::copy(datum, cpool, true)));
			}
		}
	}
}

$ElementValue* ArrayElementValueGen::getElementValue() {
	$useLocalCurrentObjectStackCache();
	$var($ElementValueArray, immutableData, $new($ElementValueArray, $nc(this->evalues)->size()));
	int32_t i = 0;
	{
		$var($Iterator, i$, $nc(this->evalues)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ElementValueGen, element, $cast($ElementValueGen, i$->next()));
			{
				immutableData->set(i++, $($nc(element)->getElementValue()));
			}
		}
	}
	int32_t var$0 = $ElementValueGen::getElementValueType();
	$var($ElementValueArray, var$1, immutableData);
	return $new($ArrayElementValue, var$0, var$1, $($nc($(getConstantPool()))->getConstantPool()));
}

void ArrayElementValueGen::init$($ArrayElementValue* value, $ConstantPoolGen* cpool, bool copyPoolEntries) {
	$useLocalCurrentObjectStackCache();
	$ElementValueGen::init$($ElementValueGen::ARRAY, cpool);
	$set(this, evalues, $new($ArrayList));
	$var($ElementValueArray, in, $nc(value)->getElementValuesArray());
	{
		$var($ElementValueArray, arr$, in);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ElementValue, element, arr$->get(i$));
			{
				$nc(this->evalues)->add($($ElementValueGen::copy(element, cpool, copyPoolEntries)));
			}
		}
	}
}

void ArrayElementValueGen::dump($DataOutputStream* dos) {
	$useLocalCurrentObjectStackCache();
	$nc(dos)->writeByte($ElementValueGen::getElementValueType());
	dos->writeShort($nc(this->evalues)->size());
	{
		$var($Iterator, i$, $nc(this->evalues)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ElementValueGen, element, $cast($ElementValueGen, i$->next()));
			{
				$nc(element)->dump(dos);
			}
		}
	}
}

$String* ArrayElementValueGen::stringifyValue() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("["_s);
	$var($String, comma, ""_s);
	{
		$var($Iterator, i$, $nc(this->evalues)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ElementValueGen, element, $cast($ElementValueGen, i$->next()));
			{
				sb->append(comma);
				$assign(comma, ","_s);
				sb->append($($nc(element)->stringifyValue()));
			}
		}
	}
	sb->append("]"_s);
	return sb->toString();
}

$List* ArrayElementValueGen::getElementValues() {
	return this->evalues;
}

int32_t ArrayElementValueGen::getElementValuesSize() {
	return $nc(this->evalues)->size();
}

void ArrayElementValueGen::addElement($ElementValueGen* gen) {
	$nc(this->evalues)->add(gen);
}

ArrayElementValueGen::ArrayElementValueGen() {
}

$Class* ArrayElementValueGen::load$($String* name, bool initialize) {
	$loadClass(ArrayElementValueGen, name, initialize, &_ArrayElementValueGen_ClassInfo_, allocate$ArrayElementValueGen);
	return class$;
}

$Class* ArrayElementValueGen::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com