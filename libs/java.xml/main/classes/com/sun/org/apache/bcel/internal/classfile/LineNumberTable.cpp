#include <com/sun/org/apache/bcel/internal/classfile/LineNumberTable.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/LineNumber.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/CharSequence.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef ATTR_LINE_NUMBER_TABLE
#undef MAX_LINE_LENGTH
#undef NEWLINE

using $LineNumberArray = $Array<::com::sun::org::apache::bcel::internal::classfile::LineNumber>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $LineNumber = ::com::sun::org::apache::bcel::internal::classfile::LineNumber;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _LineNumberTable_FieldInfo_[] = {
	{"MAX_LINE_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LineNumberTable, MAX_LINE_LENGTH)},
	{"lineNumberTable", "[Lcom/sun/org/apache/bcel/internal/classfile/LineNumber;", nullptr, $PRIVATE, $field(LineNumberTable, lineNumberTable)},
	{}
};

$MethodInfo _LineNumberTable_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/LineNumberTable;)V", nullptr, $PUBLIC, $method(LineNumberTable, init$, void, LineNumberTable*)},
	{"<init>", "(II[Lcom/sun/org/apache/bcel/internal/classfile/LineNumber;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(LineNumberTable, init$, void, int32_t, int32_t, $LineNumberArray*, $ConstantPool*)},
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(LineNumberTable, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(LineNumberTable, accept, void, $Visitor*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(LineNumberTable, copy, $Attribute*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(LineNumberTable, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getLineNumberTable", "()[Lcom/sun/org/apache/bcel/internal/classfile/LineNumber;", nullptr, $PUBLIC, $method(LineNumberTable, getLineNumberTable, $LineNumberArray*)},
	{"getSourceLine", "(I)I", nullptr, $PUBLIC, $method(LineNumberTable, getSourceLine, int32_t, int32_t)},
	{"getTableLength", "()I", nullptr, $PUBLIC, $method(LineNumberTable, getTableLength, int32_t)},
	{"setLineNumberTable", "([Lcom/sun/org/apache/bcel/internal/classfile/LineNumber;)V", nullptr, $PUBLIC, $method(LineNumberTable, setLineNumberTable, void, $LineNumberArray*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LineNumberTable, toString, $String*)},
	{}
};

$ClassInfo _LineNumberTable_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.LineNumberTable",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_LineNumberTable_FieldInfo_,
	_LineNumberTable_MethodInfo_
};

$Object* allocate$LineNumberTable($Class* clazz) {
	return $of($alloc(LineNumberTable));
}

void LineNumberTable::init$(LineNumberTable* c) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(c)->getNameIndex();
	int32_t var$1 = c->getLength();
	$var($LineNumberArray, var$2, c->getLineNumberTable());
	LineNumberTable::init$(var$0, var$1, var$2, $(c->getConstantPool()));
}

void LineNumberTable::init$(int32_t name_index, int32_t length, $LineNumberArray* line_number_table, $ConstantPool* constant_pool) {
	$Attribute::init$($Const::ATTR_LINE_NUMBER_TABLE, name_index, length, constant_pool);
	$set(this, lineNumberTable, line_number_table);
}

void LineNumberTable::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	$useLocalCurrentObjectStackCache();
	LineNumberTable::init$(name_index, length, ($LineNumberArray*)nullptr, constant_pool);
	int32_t line_number_table_length = $nc(input)->readUnsignedShort();
	$set(this, lineNumberTable, $new($LineNumberArray, line_number_table_length));
	for (int32_t i = 0; i < line_number_table_length; ++i) {
		$nc(this->lineNumberTable)->set(i, $$new($LineNumber, input));
	}
}

void LineNumberTable::accept($Visitor* v) {
	$nc(v)->visitLineNumberTable(this);
}

void LineNumberTable::dump($DataOutputStream* file) {
	$useLocalCurrentObjectStackCache();
	$Attribute::dump(file);
	$nc(file)->writeShort($nc(this->lineNumberTable)->length);
	{
		$var($LineNumberArray, arr$, this->lineNumberTable);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($LineNumber, lineNumber, arr$->get(i$));
			{
				$nc(lineNumber)->dump(file);
			}
		}
	}
}

$LineNumberArray* LineNumberTable::getLineNumberTable() {
	return this->lineNumberTable;
}

void LineNumberTable::setLineNumberTable($LineNumberArray* lineNumberTable) {
	$set(this, lineNumberTable, lineNumberTable);
}

$String* LineNumberTable::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	$var($StringBuilder, line, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(this->lineNumberTable)->length; ++i) {
		line->append($($nc($nc(this->lineNumberTable)->get(i))->toString()));
		if (i < $nc(this->lineNumberTable)->length - 1) {
			line->append(", "_s);
		}
		if ((line->length() > LineNumberTable::MAX_LINE_LENGTH) && (i < $nc(this->lineNumberTable)->length - 1)) {
			$init($SecuritySupport);
			line->append($SecuritySupport::NEWLINE);
			buf->append(static_cast<$CharSequence*>(line));
			line->setLength(0);
		}
	}
	buf->append(static_cast<$CharSequence*>(line));
	return buf->toString();
}

int32_t LineNumberTable::getSourceLine(int32_t pos) {
	int32_t l = 0;
	int32_t r = $nc(this->lineNumberTable)->length - 1;
	if (r < 0) {
		return -1;
	}
	int32_t min_index = -1;
	int32_t min = -1;
	do {
		int32_t i = (int32_t)((uint32_t)(l + r) >> 1);
		int32_t j = $nc($nc(this->lineNumberTable)->get(i))->getStartPC();
		if (j == pos) {
			return $nc($nc(this->lineNumberTable)->get(i))->getLineNumber();
		} else if (pos < j) {
			r = i - 1;
		} else {
			l = i + 1;
		}
		if (j < pos && j > min) {
			min = j;
			min_index = i;
		}
	} while (l <= r);
	if (min_index < 0) {
		return -1;
	}
	return $nc($nc(this->lineNumberTable)->get(min_index))->getLineNumber();
}

$Attribute* LineNumberTable::copy($ConstantPool* _constant_pool) {
	$useLocalCurrentObjectStackCache();
	$var(LineNumberTable, c, $cast(LineNumberTable, clone()));
	$set($nc(c), lineNumberTable, $new($LineNumberArray, $nc(this->lineNumberTable)->length));
	for (int32_t i = 0; i < $nc(this->lineNumberTable)->length; ++i) {
		$nc(c->lineNumberTable)->set(i, $($nc($nc(this->lineNumberTable)->get(i))->copy()));
	}
	c->setConstantPool(_constant_pool);
	return c;
}

int32_t LineNumberTable::getTableLength() {
	return this->lineNumberTable == nullptr ? 0 : $nc(this->lineNumberTable)->length;
}

LineNumberTable::LineNumberTable() {
}

$Class* LineNumberTable::load$($String* name, bool initialize) {
	$loadClass(LineNumberTable, name, initialize, &_LineNumberTable_ClassInfo_, allocate$LineNumberTable);
	return class$;
}

$Class* LineNumberTable::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com