#include <com/sun/org/apache/bcel/internal/util/AttributeHTML.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/Code.h>
#include <com/sun/org/apache/bcel/internal/classfile/CodeException.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/ExceptionTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/InnerClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/InnerClasses.h>
#include <com/sun/org/apache/bcel/internal/classfile/LineNumber.h>
#include <com/sun/org/apache/bcel/internal/classfile/LineNumberTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariable.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariableTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/SourceFile.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/util/Class2HTML.h>
#include <com/sun/org/apache/bcel/internal/util/ConstantHTML.h>
#include <java/io/FileOutputStream.h>
#include <java/io/PrintWriter.h>
#include <jcpp.h>

#undef ATTR_CODE
#undef ATTR_CONSTANT_VALUE
#undef ATTR_EXCEPTIONS
#undef ATTR_INNER_CLASSES
#undef ATTR_LINE_NUMBER_TABLE
#undef ATTR_LOCAL_VARIABLE_TABLE
#undef ATTR_SOURCE_FILE
#undef ATTR_UNKNOWN

using $CodeExceptionArray = $Array<::com::sun::org::apache::bcel::internal::classfile::CodeException>;
using $InnerClassArray = $Array<::com::sun::org::apache::bcel::internal::classfile::InnerClass>;
using $LineNumberArray = $Array<::com::sun::org::apache::bcel::internal::classfile::LineNumber>;
using $LocalVariableArray = $Array<::com::sun::org::apache::bcel::internal::classfile::LocalVariable>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $Code = ::com::sun::org::apache::bcel::internal::classfile::Code;
using $CodeException = ::com::sun::org::apache::bcel::internal::classfile::CodeException;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $ConstantValue = ::com::sun::org::apache::bcel::internal::classfile::ConstantValue;
using $ExceptionTable = ::com::sun::org::apache::bcel::internal::classfile::ExceptionTable;
using $InnerClass = ::com::sun::org::apache::bcel::internal::classfile::InnerClass;
using $InnerClasses = ::com::sun::org::apache::bcel::internal::classfile::InnerClasses;
using $LineNumberTable = ::com::sun::org::apache::bcel::internal::classfile::LineNumberTable;
using $LocalVariable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariable;
using $LocalVariableTable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariableTable;
using $SourceFile = ::com::sun::org::apache::bcel::internal::classfile::SourceFile;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $Class2HTML = ::com::sun::org::apache::bcel::internal::util::Class2HTML;
using $ConstantHTML = ::com::sun::org::apache::bcel::internal::util::ConstantHTML;
using $FileOutputStream = ::java::io::FileOutputStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

void AttributeHTML::init$($String* dir, $String* class_name, $ConstantPool* constant_pool, $ConstantHTML* constant_html) {
	$useLocalObjectStack();
	this->attr_count = 0;
	$set(this, class_name, class_name);
	$set(this, constant_pool, constant_pool);
	$set(this, constant_html, constant_html);
	$set(this, file, $new($PrintWriter, $$new($FileOutputStream, $$str({dir, class_name, "_attributes.html"_s}))));
	this->file->println("<HTML><BODY BGCOLOR=\"#C0C0C0\"><TABLE BORDER=0>"_s);
}

$String* AttributeHTML::codeLink(int32_t link, int32_t method_number) {
	$useLocalObjectStack();
	return $str({"<A HREF=\""_s, this->class_name, "_code.html#code"_s, $$str(method_number), "@"_s, $$str(link), "\" TARGET=Code>"_s, $$str(link), "</A>"_s});
}

void AttributeHTML::close() {
	this->file->println("</TABLE></BODY></HTML>"_s);
	this->file->close();
}

void AttributeHTML::writeAttribute($Attribute* attribute, $String* anchor) {
	writeAttribute(attribute, anchor, 0);
}

void AttributeHTML::writeAttribute($Attribute* attribute, $String* anchor, int32_t method_number) {
	$useLocalObjectStack();
	int8_t tag = $nc(attribute)->getTag();
	int32_t index = 0;
	if (tag == $Const::ATTR_UNKNOWN) {
		return;
	}
	++this->attr_count;
	if (this->attr_count % 2 == 0) {
		this->file->print("<TR BGCOLOR=\"#C0C0C0\"><TD>"_s);
	} else {
		this->file->print("<TR BGCOLOR=\"#A0A0A0\"><TD>"_s);
	}
	this->file->println($$str({"<H4><A NAME=\""_s, anchor, "\">"_s, $$str(this->attr_count), " "_s, $($Const::getAttributeName(tag)), "</A></H4>"_s}));
	{
		$var($Code, c, nullptr);
		$var($CodeExceptionArray, ce, nullptr);
		int32_t len = 0;
		$var($ints, indices, nullptr);
		$var($LineNumberArray, line_numbers, nullptr);
		$var($LocalVariableArray, vars, nullptr);
		$var($InnerClassArray, classes, nullptr);
		switch (tag) {
		case $Const::ATTR_CODE:
			{
				$assign(c, $cast($Code, attribute));
				$var($StringBuilder, var$0, $new($StringBuilder));
				var$0->append("<UL><LI>Maximum stack size = "_s);
				var$0->append($nc(c)->getMaxStack());
				var$0->append("</LI>\n<LI>Number of local variables = "_s);
				var$0->append(c->getMaxLocals());
				var$0->append("</LI>\n<LI><A HREF=\""_s);
				var$0->append(this->class_name);
				var$0->append("_code.html#method"_s);
				var$0->append(method_number);
				var$0->append("\" TARGET=Code>Byte code</A></LI></UL>\n"_s);
				this->file->print($$str(var$0));
				$assign(ce, $nc(c)->getExceptionTable());
				len = $nc(ce)->length;
				if (len > 0) {
					this->file->print("<P><B>Exceptions handled</B><UL>"_s);
					{
						$var($CodeExceptionArray, arr$, ce);
						for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
							$var($CodeException, cex, arr$->get(i$));
							{
								int32_t catch_type = $nc(cex)->getCatchType();
								this->file->print("<LI>"_s);
								if (catch_type != 0) {
									this->file->print($($nc(this->constant_html)->referenceConstant(catch_type)));
								} else {
									this->file->print("Any Exception"_s);
								}
								$var($StringBuilder, var$1, $new($StringBuilder));
								var$1->append("<BR>(Ranging from lines "_s);
								var$1->append($(codeLink(cex->getStartPC(), method_number)));
								var$1->append(" to "_s);
								var$1->append($(codeLink(cex->getEndPC(), method_number)));
								var$1->append(", handled at line "_s);
								var$1->append($(codeLink(cex->getHandlerPC(), method_number)));
								var$1->append(")</LI>"_s);
								this->file->print($$str(var$1));
							}
						}
					}
					this->file->print("</UL>"_s);
				}
				break;
			}
		case $Const::ATTR_CONSTANT_VALUE:
			index = $cast($ConstantValue, attribute)->getConstantValueIndex();
			this->file->print($$str({"<UL><LI><A HREF=\""_s, this->class_name, "_cp.html#cp"_s, $$str(index), "\" TARGET=\"ConstantPool\">Constant value index("_s, $$str(index), ")</A></UL>\n"_s}));
			break;
		case $Const::ATTR_SOURCE_FILE:
			index = $cast($SourceFile, attribute)->getSourceFileIndex();
			this->file->print($$str({"<UL><LI><A HREF=\""_s, this->class_name, "_cp.html#cp"_s, $$str(index), "\" TARGET=\"ConstantPool\">Source file index("_s, $$str(index), ")</A></UL>\n"_s}));
			break;
		case $Const::ATTR_EXCEPTIONS:
			{
				$assign(indices, $cast($ExceptionTable, attribute)->getExceptionIndexTable());
				this->file->print("<UL>"_s);
				{
					$var($ints, arr$, indices);
					for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
						int32_t indice = arr$->get(i$);
						{
							this->file->print($$str({"<LI><A HREF=\""_s, this->class_name, "_cp.html#cp"_s, $$str(indice), "\" TARGET=\"ConstantPool\">Exception class index("_s, $$str(indice), ")</A>\n"_s}));
						}
					}
				}
				this->file->print("</UL>\n"_s);
				break;
			}
		case $Const::ATTR_LINE_NUMBER_TABLE:
			$assign(line_numbers, $cast($LineNumberTable, attribute)->getLineNumberTable());
			this->file->print("<P>"_s);
			for (int32_t i = 0; i < $nc(line_numbers)->length; ++i) {
				$var($StringBuilder, var$2, $new($StringBuilder));
				var$2->append("("_s);
				var$2->append($nc(line_numbers->get(i))->getStartPC());
				var$2->append(",&nbsp;"_s);
				var$2->append($nc(line_numbers->get(i))->getLineNumber());
				var$2->append(")"_s);
				this->file->print($$str(var$2));
				if (i < line_numbers->length - 1) {
					this->file->print(", "_s);
				}
			}
			break;
		case $Const::ATTR_LOCAL_VARIABLE_TABLE:
			{
				$assign(vars, $cast($LocalVariableTable, attribute)->getLocalVariableTable());
				this->file->print("<UL>"_s);
				{
					$var($LocalVariableArray, arr$, vars);
					for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
						$var($LocalVariable, var, arr$->get(i$));
						{
							index = $nc(var)->getSignatureIndex();
							$var($String, signature, $$sure($ConstantUtf8, $nc(this->constant_pool)->getConstant(index, $Const::CONSTANT_Utf8))->getBytes());
							$assign(signature, $Utility::signatureToString(signature, false));
							int32_t start = var->getStartPC();
							int32_t end = start + var->getLength();
							$var($StringBuilder, var$3, $new($StringBuilder));
							var$3->append("<LI>"_s);
							var$3->append($($Class2HTML::referenceType(signature)));
							var$3->append("&nbsp;<B>"_s);
							var$3->append($(var->getName()));
							var$3->append("</B> in slot %"_s);
							var$3->append(var->getIndex());
							var$3->append("<BR>Valid from lines <A HREF=\""_s);
							var$3->append(this->class_name);
							var$3->append("_code.html#code"_s);
							var$3->append(method_number);
							var$3->append("@"_s);
							var$3->append(start);
							var$3->append("\" TARGET=Code>"_s);
							var$3->append(start);
							var$3->append("</A> to <A HREF=\""_s);
							var$3->append(this->class_name);
							var$3->append("_code.html#code"_s);
							var$3->append(method_number);
							var$3->append("@"_s);
							var$3->append(end);
							var$3->append("\" TARGET=Code>"_s);
							var$3->append(end);
							var$3->append("</A></LI>"_s);
							this->file->println($$str(var$3));
						}
					}
				}
				this->file->print("</UL>\n"_s);
				break;
			}
		case $Const::ATTR_INNER_CLASSES:
			{
				$assign(classes, $cast($InnerClasses, attribute)->getInnerClasses());
				this->file->print("<UL>"_s);
				{
					$var($InnerClassArray, arr$, classes);
					for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
						$var($InnerClass, classe, arr$->get(i$));
						{
							$var($String, name, nullptr);
							$var($String, access, nullptr);
							index = $nc(classe)->getInnerNameIndex();
							if (index > 0) {
								$assign(name, $$sure($ConstantUtf8, $nc(this->constant_pool)->getConstant(index, $Const::CONSTANT_Utf8))->getBytes());
							} else {
								$assign(name, "&lt;anonymous&gt;"_s);
							}
							$assign(access, $Utility::accessToString(classe->getInnerAccessFlags()));
							$var($StringBuilder, var$4, $new($StringBuilder));
							var$4->append("<LI><FONT COLOR=\"#FF0000\">"_s);
							var$4->append(access);
							var$4->append("</FONT> "_s);
							var$4->append($($nc(this->constant_html)->referenceConstant(classe->getInnerClassIndex())));
							var$4->append(" in&nbsp;class "_s);
							var$4->append($(this->constant_html->referenceConstant(classe->getOuterClassIndex())));
							var$4->append(" named "_s);
							var$4->append(name);
							var$4->append("</LI>\n"_s);
							this->file->print($$str(var$4));
						}
					}
				}
				this->file->print("</UL>\n"_s);
				break;
			}
		default:
			this->file->print($$str({"<P>"_s, attribute}));
		}
	}
	this->file->println("</TD></TR>"_s);
	this->file->flush();
}

AttributeHTML::AttributeHTML() {
}

$Class* AttributeHTML::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"class_name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AttributeHTML, class_name)},
		{"file", "Ljava/io/PrintWriter;", nullptr, $PRIVATE | $FINAL, $field(AttributeHTML, file)},
		{"attr_count", "I", nullptr, $PRIVATE, $field(AttributeHTML, attr_count)},
		{"constant_html", "Lcom/sun/org/apache/bcel/internal/util/ConstantHTML;", nullptr, $PRIVATE | $FINAL, $field(AttributeHTML, constant_html)},
		{"constant_pool", "Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PRIVATE | $FINAL, $field(AttributeHTML, constant_pool)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;Lcom/sun/org/apache/bcel/internal/util/ConstantHTML;)V", nullptr, 0, $method(AttributeHTML, init$, void, $String*, $String*, $ConstantPool*, $ConstantHTML*), "java.io.IOException"},
		{"close", "()V", nullptr, 0, $method(AttributeHTML, close, void)},
		{"codeLink", "(II)Ljava/lang/String;", nullptr, $PRIVATE, $method(AttributeHTML, codeLink, $String*, int32_t, int32_t)},
		{"writeAttribute", "(Lcom/sun/org/apache/bcel/internal/classfile/Attribute;Ljava/lang/String;)V", nullptr, 0, $method(AttributeHTML, writeAttribute, void, $Attribute*, $String*)},
		{"writeAttribute", "(Lcom/sun/org/apache/bcel/internal/classfile/Attribute;Ljava/lang/String;I)V", nullptr, 0, $method(AttributeHTML, writeAttribute, void, $Attribute*, $String*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.util.AttributeHTML",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AttributeHTML, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeHTML);
	});
	return class$;
}

$Class* AttributeHTML::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com