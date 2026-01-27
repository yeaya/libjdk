#include <com/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry.h>

#include <com/sun/org/apache/bcel/internal/classfile/AnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ParameterAnnotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <jcpp.h>

using $AnnotationEntryArray = $Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>;
using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $ParameterAnnotationEntryArray = $Array<::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotationEntry>;
using $AnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ParameterAnnotations = ::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotations;
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
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _ParameterAnnotationEntry_FieldInfo_[] = {
	{"annotationTable", "[Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;", nullptr, $PRIVATE | $FINAL, $field(ParameterAnnotationEntry, annotationTable)},
	{}
};

$MethodInfo _ParameterAnnotationEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(ParameterAnnotationEntry, init$, void, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ParameterAnnotationEntry, accept, void, $Visitor*)},
	{"createParameterAnnotationEntries", "([Lcom/sun/org/apache/bcel/internal/classfile/Attribute;)[Lcom/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry;", nullptr, $PUBLIC | $STATIC, $staticMethod(ParameterAnnotationEntry, createParameterAnnotationEntries, $ParameterAnnotationEntryArray*, $AttributeArray*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ParameterAnnotationEntry, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getAnnotationEntries", "()[Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;", nullptr, $PUBLIC, $virtualMethod(ParameterAnnotationEntry, getAnnotationEntries, $AnnotationEntryArray*)},
	{}
};

$ClassInfo _ParameterAnnotationEntry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ParameterAnnotationEntry",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.classfile.Node",
	_ParameterAnnotationEntry_FieldInfo_,
	_ParameterAnnotationEntry_MethodInfo_
};

$Object* allocate$ParameterAnnotationEntry($Class* clazz) {
	return $of($alloc(ParameterAnnotationEntry));
}

void ParameterAnnotationEntry::init$($DataInput* input, $ConstantPool* constant_pool) {
	$useLocalCurrentObjectStackCache();
	int32_t annotation_table_length = $nc(input)->readUnsignedShort();
	$set(this, annotationTable, $new($AnnotationEntryArray, annotation_table_length));
	for (int32_t i = 0; i < annotation_table_length; ++i) {
		$nc(this->annotationTable)->set(i, $($AnnotationEntry::read(input, constant_pool, false)));
	}
}

void ParameterAnnotationEntry::accept($Visitor* v) {
	$nc(v)->visitParameterAnnotationEntry(this);
}

$AnnotationEntryArray* ParameterAnnotationEntry::getAnnotationEntries() {
	return this->annotationTable;
}

void ParameterAnnotationEntry::dump($DataOutputStream* dos) {
	$useLocalCurrentObjectStackCache();
	$nc(dos)->writeShort($nc(this->annotationTable)->length);
	{
		$var($AnnotationEntryArray, arr$, this->annotationTable);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($AnnotationEntry, entry, arr$->get(i$));
			{
				$nc(entry)->dump(dos);
			}
		}
	}
}

$ParameterAnnotationEntryArray* ParameterAnnotationEntry::createParameterAnnotationEntries($AttributeArray* attrs) {
	$init(ParameterAnnotationEntry);
	$useLocalCurrentObjectStackCache();
	$var($List, accumulatedAnnotations, $new($ArrayList, $nc(attrs)->length));
	{
		$var($AttributeArray, arr$, attrs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				if ($instanceOf($ParameterAnnotations, attribute)) {
					$var($ParameterAnnotations, runtimeAnnotations, $cast($ParameterAnnotations, attribute));
					$Collections::addAll(accumulatedAnnotations, $($nc(runtimeAnnotations)->getParameterAnnotationEntries()));
				}
			}
		}
	}
	return $fcast($ParameterAnnotationEntryArray, accumulatedAnnotations->toArray($$new($ParameterAnnotationEntryArray, accumulatedAnnotations->size())));
}

ParameterAnnotationEntry::ParameterAnnotationEntry() {
}

$Class* ParameterAnnotationEntry::load$($String* name, bool initialize) {
	$loadClass(ParameterAnnotationEntry, name, initialize, &_ParameterAnnotationEntry_ClassInfo_, allocate$ParameterAnnotationEntry);
	return class$;
}

$Class* ParameterAnnotationEntry::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com