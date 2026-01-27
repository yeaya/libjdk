#include <com/sun/org/apache/bcel/internal/classfile/StackMap.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/StackMapEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_STACK_MAP

using $StackMapEntryArray = $Array<::com::sun::org::apache::bcel::internal::classfile::StackMapEntry>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $StackMapEntry = ::com::sun::org::apache::bcel::internal::classfile::StackMapEntry;
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

$FieldInfo _StackMap_FieldInfo_[] = {
	{"map", "[Lcom/sun/org/apache/bcel/internal/classfile/StackMapEntry;", nullptr, $PRIVATE, $field(StackMap, map)},
	{}
};

$MethodInfo _StackMap_MethodInfo_[] = {
	{"<init>", "(II[Lcom/sun/org/apache/bcel/internal/classfile/StackMapEntry;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(StackMap, init$, void, int32_t, int32_t, $StackMapEntryArray*, $ConstantPool*)},
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(StackMap, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(StackMap, accept, void, $Visitor*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(StackMap, copy, $Attribute*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(StackMap, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getMapLength", "()I", nullptr, $PUBLIC, $method(StackMap, getMapLength, int32_t)},
	{"getStackMap", "()[Lcom/sun/org/apache/bcel/internal/classfile/StackMapEntry;", nullptr, $PUBLIC, $method(StackMap, getStackMap, $StackMapEntryArray*)},
	{"setStackMap", "([Lcom/sun/org/apache/bcel/internal/classfile/StackMapEntry;)V", nullptr, $PUBLIC, $method(StackMap, setStackMap, void, $StackMapEntryArray*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StackMap, toString, $String*)},
	{}
};

$ClassInfo _StackMap_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.StackMap",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_StackMap_FieldInfo_,
	_StackMap_MethodInfo_
};

$Object* allocate$StackMap($Class* clazz) {
	return $of($alloc(StackMap));
}

void StackMap::init$(int32_t name_index, int32_t length, $StackMapEntryArray* map, $ConstantPool* constant_pool) {
	$Attribute::init$($Const::ATTR_STACK_MAP, name_index, length, constant_pool);
	$set(this, map, map);
}

void StackMap::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	$useLocalCurrentObjectStackCache();
	StackMap::init$(name_index, length, ($StackMapEntryArray*)nullptr, constant_pool);
	int32_t map_length = $nc(input)->readUnsignedShort();
	$set(this, map, $new($StackMapEntryArray, map_length));
	for (int32_t i = 0; i < map_length; ++i) {
		$nc(this->map)->set(i, $$new($StackMapEntry, input, constant_pool));
	}
}

void StackMap::dump($DataOutputStream* file) {
	$useLocalCurrentObjectStackCache();
	$Attribute::dump(file);
	$nc(file)->writeShort($nc(this->map)->length);
	{
		$var($StackMapEntryArray, arr$, this->map);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($StackMapEntry, entry, arr$->get(i$));
			{
				$nc(entry)->dump(file);
			}
		}
	}
}

$StackMapEntryArray* StackMap::getStackMap() {
	return this->map;
}

void StackMap::setStackMap($StackMapEntryArray* map) {
	$useLocalCurrentObjectStackCache();
	$set(this, map, map);
	int32_t len = 2;
	{
		$var($StackMapEntryArray, arr$, map);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($StackMapEntry, element, arr$->get(i$));
			{
				len += $nc(element)->getMapEntrySize();
			}
		}
	}
	setLength(len);
}

$String* StackMap::toString() {
	$var($StringBuilder, buf, $new($StringBuilder, "StackMap("_s));
	for (int32_t i = 0; i < $nc(this->map)->length; ++i) {
		buf->append($of($nc(this->map)->get(i)));
		if (i < $nc(this->map)->length - 1) {
			buf->append(", "_s);
		}
	}
	buf->append(u')');
	return buf->toString();
}

$Attribute* StackMap::copy($ConstantPool* _constant_pool) {
	$useLocalCurrentObjectStackCache();
	$var(StackMap, c, $cast(StackMap, clone()));
	$set($nc(c), map, $new($StackMapEntryArray, $nc(this->map)->length));
	for (int32_t i = 0; i < $nc(this->map)->length; ++i) {
		$nc(c->map)->set(i, $($nc($nc(this->map)->get(i))->copy()));
	}
	c->setConstantPool(_constant_pool);
	return c;
}

void StackMap::accept($Visitor* v) {
	$nc(v)->visitStackMap(this);
}

int32_t StackMap::getMapLength() {
	return this->map == nullptr ? 0 : $nc(this->map)->length;
}

StackMap::StackMap() {
}

$Class* StackMap::load$($String* name, bool initialize) {
	$loadClass(StackMap, name, initialize, &_StackMap_ClassInfo_, allocate$StackMap);
	return class$;
}

$Class* StackMap::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com