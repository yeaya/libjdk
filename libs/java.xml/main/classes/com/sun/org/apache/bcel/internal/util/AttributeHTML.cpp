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
#include <java/io/OutputStream.h>
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
using $LineNumber = ::com::sun::org::apache::bcel::internal::classfile::LineNumber;
using $LineNumberTable = ::com::sun::org::apache::bcel::internal::classfile::LineNumberTable;
using $LocalVariable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariable;
using $LocalVariableTable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariableTable;
using $SourceFile = ::com::sun::org::apache::bcel::internal::classfile::SourceFile;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $Class2HTML = ::com::sun::org::apache::bcel::internal::util::Class2HTML;
using $ConstantHTML = ::com::sun::org::apache::bcel::internal::util::ConstantHTML;
using $FileOutputStream = ::java::io::FileOutputStream;
using $OutputStream = ::java::io::OutputStream;
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

$FieldInfo _AttributeHTML_FieldInfo_[] = {
	{"class_name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AttributeHTML, class_name)},
	{"file", "Ljava/io/PrintWriter;", nullptr, $PRIVATE | $FINAL, $field(AttributeHTML, file)},
	{"attr_count", "I", nullptr, $PRIVATE, $field(AttributeHTML, attr_count)},
	{"constant_html", "Lcom/sun/org/apache/bcel/internal/util/ConstantHTML;", nullptr, $PRIVATE | $FINAL, $field(AttributeHTML, constant_html)},
	{"constant_pool", "Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PRIVATE | $FINAL, $field(AttributeHTML, constant_pool)},
	{}
};

$MethodInfo _AttributeHTML_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;Lcom/sun/org/apache/bcel/internal/util/ConstantHTML;)V", nullptr, 0, $method(AttributeHTML, init$, void, $String*, $String*, $ConstantPool*, $ConstantHTML*), "java.io.IOException"},
	{"close", "()V", nullptr, 0, $method(AttributeHTML, close, void)},
	{"codeLink", "(II)Ljava/lang/String;", nullptr, $PRIVATE, $method(AttributeHTML, codeLink, $String*, int32_t, int32_t)},
	{"writeAttribute", "(Lcom/sun/org/apache/bcel/internal/classfile/Attribute;Ljava/lang/String;)V", nullptr, 0, $method(AttributeHTML, writeAttribute, void, $Attribute*, $String*)},
	{"writeAttribute", "(Lcom/sun/org/apache/bcel/internal/classfile/Attribute;Ljava/lang/String;I)V", nullptr, 0, $method(AttributeHTML, writeAttribute, void, $Attribute*, $String*, int32_t)},
	{}
};

$ClassInfo _AttributeHTML_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.util.AttributeHTML",
	"java.lang.Object",
	nullptr,
	_AttributeHTML_FieldInfo_,
	_AttributeHTML_MethodInfo_
};

$Object* allocate$AttributeHTML($Class* clazz) {
	return $of($alloc(AttributeHTML));
}

void AttributeHTML::init$($String* dir, $String* class_name, $ConstantPool* constant_pool, $ConstantHTML* constant_html) {
	$useLocalCurrentObjectStackCache();
	this->attr_count = 0;
	$set(this, class_name, class_name);
	$set(this, constant_pool, constant_pool);
	$set(this, constant_html, constant_html);
	$set(this, file, $new($PrintWriter, static_cast<$OutputStream*>($$new($FileOutputStream, $$str({dir, class_name, "_attributes.html"_s})))));
	$nc(this->file)->println("<HTML><BODY BGCOLOR=\"#C0C0C0\"><TABLE BORDER=0>"_s);
}

$String* AttributeHTML::codeLink(int32_t link, int32_t method_number) {
	$useLocalCurrentObjectStackCache();
	return $str({"<A HREF=\""_s, this->class_name, "_code.html#code"_s, $$str(method_number), "@"_s, $$str(link), "\" TARGET=Code>"_s, $$str(link), "</A>"_s});
}

void AttributeHTML::close() {
	$nc(this->file)->println("</TABLE></BODY></HTML>"_s);
	$nc(this->file)->close();
}

void AttributeHTML::writeAttribute($Attribute* attribute, $String* anchor) {
	writeAttribute(attribute, anchor, 0);
}

void AttributeHTML::writeAttribute($Attribute* attribute, $String* anchor, int32_t method_number) {
	$useLocalCurrentObjectStackCache();
	int8_t tag = $nc(attribute)->getTag();
	int32_t index = 0;
	if (tag == $Const::ATTR_UNKNOWN) {
		return;
	}
	++this->attr_count;
	if (this->attr_count % 2 == 0) {
		$nc(this->file)->print("<TR BGCOLOR=\"#C0C0C0\"><TD>"_s);
	} else {
		$nc(this->file)->print("<TR BGCOLOR=\"#A0A0A0\"><TD>"_s);
	}
	$nc(this->file)->println($$str({"<H4><A NAME=\""_s, anchor, "\">"_s, $$str(this->attr_count), " "_s, $($Const::getAttributeName(tag)), "</A></H4>"_s}));
	{
		$var($Code, c, nullptr)
		$var($CodeExceptionArray, ce, nullptr)
		int32_t len = 0;
		$var($ints, indices, nullptr)
		$var($LineNumberArray, line_numbers, nullptr)
		$var($LocalVariableArray, vars, nullptr)
		$var($InnerClassArray, classes, nullptr)
		switch (tag) {
		case $Const::ATTR_CODE:
			{
				$assign(c, $cast($Code, attribute));
				$var($String, var$5, $$str({"<UL><LI>Maximum stack size = "_s, $$str($nc(c)->getMaxStack()), "</LI>\n<LI>Number of local variables = "_s}));
				$var($String, var$4, $$concat(var$5, $$str(c->getMaxLocals())));
				$var($String, var$3, $$concat(var$4, "</LI>\n<LI><A HREF=\""_s));
				$var($String, var$2, $$concat(var$3, this->class_name));
				$var($String, var$1, $$concat(var$2, "_code.html#method"_s));
				$var($String, var$0, $$concat(var$1, $$str(method_number)));
				$nc(this->file)->print($$concat(var$0, "\" TARGET=Code>Byte code</A></LI></UL>\n"_s));
				$assign(ce, $nc(c)->getExceptionTable());
				len = $nc(ce)->length;
				if (len > 0) {
					$nc(this->file)->print("<P><B>Exceptions handled</B><UL>"_s);
					{
						$var($CodeExceptionArray, arr$, ce);
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($CodeException, cex, arr$->get(i$));
							{
								int32_t catch_type = $nc(cex)->getCatchType();
								$nc(this->file)->print("<LI>"_s);
								if (catch_type != 0) {
									$nc(this->file)->print($($nc(this->constant_html)->referenceConstant(catch_type)));
								} else {
									$nc(this->file)->print("Any Exception"_s);
								}
								$var($String, var$9, $$str({"<BR>(Ranging from lines "_s, $(codeLink(cex->getStartPC(), method_number)), " to "_s}));
								$var($String, var$8, $$concat(var$9, $(codeLink(cex->getEndPC(), method_number))));
								$var($String, var$7, $$concat(var$8, ", handled at line "_s));
								$var($String, var$6, $$concat(var$7, $(codeLink(cex->getHandlerPC(), method_number))));
								$nc(this->file)->print($$concat(var$6, ")</LI>"_s));
							}
						}
					}
					$nc(this->file)->print("</UL>"_s);
				}
				break;
			}
		case $Const::ATTR_CONSTANT_VALUE:
			{
				index = $nc(($cast($ConstantValue, attribute)))->getConstantValueIndex();
				$nc(this->file)->print($$str({"<UL><LI><A HREF=\""_s, this->class_name, "_cp.html#cp"_s, $$str(index), "\" TARGET=\"ConstantPool\">Constant value index("_s, $$str(index), ")</A></UL>\n"_s}));
				break;
			}
		case $Const::ATTR_SOURCE_FILE:
			{
				index = $nc(($cast($SourceFile, attribute)))->getSourceFileIndex();
				$nc(this->file)->print($$str({"<UL><LI><A HREF=\""_s, this->class_name, "_cp.html#cp"_s, $$str(index), "\" TARGET=\"ConstantPool\">Source file index("_s, $$str(index), ")</A></UL>\n"_s}));
				break;
			}
		case $Const::ATTR_EXCEPTIONS:
			{
				$assign(indices, $nc(($cast($ExceptionTable, attribute)))->getExceptionIndexTable());
				$nc(this->file)->print("<UL>"_s);
				{
					$var($ints, arr$, indices);
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						int32_t indice = arr$->get(i$);
						{
							$nc(this->file)->print($$str({"<LI><A HREF=\""_s, this->class_name, "_cp.html#cp"_s, $$str(indice), "\" TARGET=\"ConstantPool\">Exception class index("_s, $$str(indice), ")</A>\n"_s}));
						}
					}
				}
				$nc(this->file)->print("</UL>\n"_s);
				break;
			}
		case $Const::ATTR_LINE_NUMBER_TABLE:
			{
				$assign(line_numbers, $nc(($cast($LineNumberTable, attribute)))->getLineNumberTable());
				$nc(this->file)->print("<P>"_s);
				for (int32_t i = 0; i < $nc(line_numbers)->length; ++i) {
					$var($String, var$11, $$str({"("_s, $$str($nc(line_numbers->get(i))->getStartPC()), ",&nbsp;"_s}));
					$var($String, var$10, $$concat(var$11, $$str($nc(line_numbers->get(i))->getLineNumber())));
					$nc(this->file)->print($$concat(var$10, ")"_s));
					if (i < line_numbers->length - 1) {
						$nc(this->file)->print(", "_s);
					}
				}
				break;
			}
		case $Const::ATTR_LOCAL_VARIABLE_TABLE:
			{
				$assign(vars, $nc(($cast($LocalVariableTable, attribute)))->getLocalVariableTable());
				$nc(this->file)->print("<UL>"_s);
				{
					$var($LocalVariableArray, arr$, vars);
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($LocalVariable, var, arr$->get(i$));
						{
							index = $nc(var)->getSignatureIndex();
							$var($String, signature, $nc(($cast($ConstantUtf8, $($nc(this->constant_pool)->getConstant(index, $Const::CONSTANT_Utf8)))))->getBytes());
							$assign(signature, $Utility::signatureToString(signature, false));
							int32_t start = var->getStartPC();
							int32_t end = start + var->getLength();
							$var($String, var$31, $$str({"<LI>"_s, $($Class2HTML::referenceType(signature)), "&nbsp;<B>"_s}));
							$var($String, var$30, $$concat(var$31, $(var->getName())));
							$var($String, var$29, $$concat(var$30, "</B> in slot %"_s));
							$var($String, var$28, $$concat(var$29, $$str(var->getIndex())));
							$var($String, var$27, $$concat(var$28, "<BR>Valid from lines <A HREF=\""_s));
							$var($String, var$26, $$concat(var$27, this->class_name));
							$var($String, var$25, $$concat(var$26, "_code.html#code"_s));
							$var($String, var$24, $$concat(var$25, $$str(method_number)));
							$var($String, var$23, $$concat(var$24, "@"_s));
							$var($String, var$22, $$concat(var$23, $$str(start)));
							$var($String, var$21, $$concat(var$22, "\" TARGET=Code>"_s));
							$var($String, var$20, $$concat(var$21, $$str(start)));
							$var($String, var$19, $$concat(var$20, "</A> to <A HREF=\""_s));
							$var($String, var$18, $$concat(var$19, this->class_name));
							$var($String, var$17, $$concat(var$18, "_code.html#code"_s));
							$var($String, var$16, $$concat(var$17, $$str(method_number)));
							$var($String, var$15, $$concat(var$16, "@"_s));
							$var($String, var$14, $$concat(var$15, $$str(end)));
							$var($String, var$13, $$concat(var$14, "\" TARGET=Code>"_s));
							$var($String, var$12, $$concat(var$13, $$str(end)));
							$nc(this->file)->println($$concat(var$12, "</A></LI>"_s));
						}
					}
				}
				$nc(this->file)->print("</UL>\n"_s);
				break;
			}
		case $Const::ATTR_INNER_CLASSES:
			{
				$assign(classes, $nc(($cast($InnerClasses, attribute)))->getInnerClasses());
				$nc(this->file)->print("<UL>"_s);
				{
					$var($InnerClassArray, arr$, classes);
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($InnerClass, classe, arr$->get(i$));
						{
							$var($String, name, nullptr);
							$var($String, access, nullptr);
							index = $nc(classe)->getInnerNameIndex();
							if (index > 0) {
								$assign(name, $nc(($cast($ConstantUtf8, $($nc(this->constant_pool)->getConstant(index, $Const::CONSTANT_Utf8)))))->getBytes());
							} else {
								$assign(name, "&lt;anonymous&gt;"_s);
							}
							$assign(access, $Utility::accessToString(classe->getInnerAccessFlags()));
							$var($String, var$35, $$str({"<LI><FONT COLOR=\"#FF0000\">"_s, access, "</FONT> "_s, $($nc(this->constant_html)->referenceConstant(classe->getInnerClassIndex())), " in&nbsp;class "_s}));
							$var($String, var$34, $$concat(var$35, $($nc(this->constant_html)->referenceConstant(classe->getOuterClassIndex()))));
							$var($String, var$33, $$concat(var$34, " named "_s));
							$var($String, var$32, $$concat(var$33, name));
							$nc(this->file)->print($$concat(var$32, "</LI>\n"_s));
						}
					}
				}
				$nc(this->file)->print("</UL>\n"_s);
				break;
			}
		default:
			{
				$nc(this->file)->print($$str({"<P>"_s, attribute}));
			}
		}
	}
	$nc(this->file)->println("</TD></TR>"_s);
	$nc(this->file)->flush();
}

AttributeHTML::AttributeHTML() {
}

$Class* AttributeHTML::load$($String* name, bool initialize) {
	$loadClass(AttributeHTML, name, initialize, &_AttributeHTML_ClassInfo_, allocate$AttributeHTML);
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