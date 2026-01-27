#include <com/sun/org/apache/bcel/internal/classfile/AnnotationEntry.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Annotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/ElementValuePair.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $AnnotationEntryArray = $Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>;
using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $ElementValuePairArray = $Array<::com::sun::org::apache::bcel::internal::classfile::ElementValuePair>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Annotations = ::com::sun::org::apache::bcel::internal::classfile::Annotations;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $ElementValue = ::com::sun::org::apache::bcel::internal::classfile::ElementValue;
using $ElementValuePair = ::com::sun::org::apache::bcel::internal::classfile::ElementValuePair;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _AnnotationEntry_FieldInfo_[] = {
	{"typeIndex", "I", nullptr, $PRIVATE | $FINAL, $field(AnnotationEntry, typeIndex)},
	{"constantPool", "Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PRIVATE | $FINAL, $field(AnnotationEntry, constantPool)},
	{"isRuntimeVisible", "Z", nullptr, $PRIVATE | $FINAL, $field(AnnotationEntry, isRuntimeVisible$)},
	{"elementValuePairs", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/classfile/ElementValuePair;>;", $PRIVATE, $field(AnnotationEntry, elementValuePairs)},
	{}
};

$MethodInfo _AnnotationEntry_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;Z)V", nullptr, $PUBLIC, $method(AnnotationEntry, init$, void, int32_t, $ConstantPool*, bool)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(AnnotationEntry, accept, void, $Visitor*)},
	{"addElementNameValuePair", "(Lcom/sun/org/apache/bcel/internal/classfile/ElementValuePair;)V", nullptr, $PUBLIC, $virtualMethod(AnnotationEntry, addElementNameValuePair, void, $ElementValuePair*)},
	{"createAnnotationEntries", "([Lcom/sun/org/apache/bcel/internal/classfile/Attribute;)[Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;", nullptr, $PUBLIC | $STATIC, $staticMethod(AnnotationEntry, createAnnotationEntries, $AnnotationEntryArray*, $AttributeArray*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(AnnotationEntry, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getAnnotationType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AnnotationEntry, getAnnotationType, $String*)},
	{"getAnnotationTypeIndex", "()I", nullptr, $PUBLIC, $virtualMethod(AnnotationEntry, getAnnotationTypeIndex, int32_t)},
	{"getConstantPool", "()Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PUBLIC, $virtualMethod(AnnotationEntry, getConstantPool, $ConstantPool*)},
	{"getElementValuePairs", "()[Lcom/sun/org/apache/bcel/internal/classfile/ElementValuePair;", nullptr, $PUBLIC, $virtualMethod(AnnotationEntry, getElementValuePairs, $ElementValuePairArray*)},
	{"getNumElementValuePairs", "()I", nullptr, $PUBLIC | $FINAL, $method(AnnotationEntry, getNumElementValuePairs, int32_t)},
	{"getTypeIndex", "()I", nullptr, $PUBLIC, $virtualMethod(AnnotationEntry, getTypeIndex, int32_t)},
	{"isRuntimeVisible", "()Z", nullptr, $PUBLIC, $virtualMethod(AnnotationEntry, isRuntimeVisible, bool)},
	{"read", "(Ljava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;Z)Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;", nullptr, $PUBLIC | $STATIC, $staticMethod(AnnotationEntry, read, AnnotationEntry*, $DataInput*, $ConstantPool*, bool), "java.io.IOException"},
	{"toShortString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AnnotationEntry, toShortString, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AnnotationEntry, toString, $String*)},
	{}
};

$ClassInfo _AnnotationEntry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.AnnotationEntry",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.classfile.Node",
	_AnnotationEntry_FieldInfo_,
	_AnnotationEntry_MethodInfo_
};

$Object* allocate$AnnotationEntry($Class* clazz) {
	return $of($alloc(AnnotationEntry));
}

AnnotationEntry* AnnotationEntry::read($DataInput* input, $ConstantPool* constant_pool, bool isRuntimeVisible) {
	$init(AnnotationEntry);
	$useLocalCurrentObjectStackCache();
	$var(AnnotationEntry, annotationEntry, $new(AnnotationEntry, $nc(input)->readUnsignedShort(), constant_pool, isRuntimeVisible));
	int32_t num_element_value_pairs = $nc(input)->readUnsignedShort();
	$set(annotationEntry, elementValuePairs, $new($ArrayList));
	for (int32_t i = 0; i < num_element_value_pairs; ++i) {
		int32_t var$0 = input->readUnsignedShort();
		$nc(annotationEntry->elementValuePairs)->add($$new($ElementValuePair, var$0, $($ElementValue::readElementValue(input, constant_pool)), constant_pool));
	}
	return annotationEntry;
}

void AnnotationEntry::init$(int32_t type_index, $ConstantPool* constant_pool, bool isRuntimeVisible) {
	this->typeIndex = type_index;
	$set(this, constantPool, constant_pool);
	this->isRuntimeVisible$ = isRuntimeVisible;
}

int32_t AnnotationEntry::getTypeIndex() {
	return this->typeIndex;
}

$ConstantPool* AnnotationEntry::getConstantPool() {
	return this->constantPool;
}

bool AnnotationEntry::isRuntimeVisible() {
	return this->isRuntimeVisible$;
}

void AnnotationEntry::accept($Visitor* v) {
	$nc(v)->visitAnnotationEntry(this);
}

$String* AnnotationEntry::getAnnotationType() {
	$var($ConstantUtf8, c, $cast($ConstantUtf8, $nc(this->constantPool)->getConstant(this->typeIndex, $Const::CONSTANT_Utf8)));
	return $nc(c)->getBytes();
}

int32_t AnnotationEntry::getAnnotationTypeIndex() {
	return this->typeIndex;
}

int32_t AnnotationEntry::getNumElementValuePairs() {
	return $nc(this->elementValuePairs)->size();
}

$ElementValuePairArray* AnnotationEntry::getElementValuePairs() {
	return $fcast($ElementValuePairArray, $nc(this->elementValuePairs)->toArray($$new($ElementValuePairArray, $nc(this->elementValuePairs)->size())));
}

void AnnotationEntry::dump($DataOutputStream* dos) {
	$useLocalCurrentObjectStackCache();
	$nc(dos)->writeShort(this->typeIndex);
	dos->writeShort($nc(this->elementValuePairs)->size());
	{
		$var($Iterator, i$, $nc(this->elementValuePairs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ElementValuePair, envp, $cast($ElementValuePair, i$->next()));
			{
				$nc(envp)->dump(dos);
			}
		}
	}
}

void AnnotationEntry::addElementNameValuePair($ElementValuePair* elementNameValuePair) {
	$nc(this->elementValuePairs)->add(elementNameValuePair);
}

$String* AnnotationEntry::toShortString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, result, $new($StringBuilder));
	result->append("@"_s);
	result->append($(getAnnotationType()));
	$var($ElementValuePairArray, evPairs, getElementValuePairs());
	if ($nc(evPairs)->length > 0) {
		result->append("("_s);
		{
			$var($ElementValuePairArray, arr$, evPairs);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($ElementValuePair, element, arr$->get(i$));
				{
					result->append($($nc(element)->toShortString()));
				}
			}
		}
		result->append(")"_s);
	}
	return result->toString();
}

$String* AnnotationEntry::toString() {
	return toShortString();
}

$AnnotationEntryArray* AnnotationEntry::createAnnotationEntries($AttributeArray* attrs) {
	$init(AnnotationEntry);
	$useLocalCurrentObjectStackCache();
	$var($List, accumulatedAnnotations, $new($ArrayList, $nc(attrs)->length));
	{
		$var($AttributeArray, arr$, attrs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				if ($instanceOf($Annotations, attribute)) {
					$var($Annotations, runtimeAnnotations, $cast($Annotations, attribute));
					$Collections::addAll(accumulatedAnnotations, $($nc(runtimeAnnotations)->getAnnotationEntries()));
				}
			}
		}
	}
	return $fcast($AnnotationEntryArray, accumulatedAnnotations->toArray($$new($AnnotationEntryArray, accumulatedAnnotations->size())));
}

AnnotationEntry::AnnotationEntry() {
}

$Class* AnnotationEntry::load$($String* name, bool initialize) {
	$loadClass(AnnotationEntry, name, initialize, &_AnnotationEntry_ClassInfo_, allocate$AnnotationEntry);
	return class$;
}

$Class* AnnotationEntry::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com