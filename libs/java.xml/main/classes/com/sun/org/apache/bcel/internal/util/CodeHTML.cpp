#include <com/sun/org/apache/bcel/internal/util/CodeHTML.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/AccessFlags.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/Code.h>
#include <com/sun/org/apache/bcel/internal/classfile/CodeException.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantFieldref.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantInterfaceMethodref.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantInvokeDynamic.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantMethodref.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantNameAndType.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariable.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariableTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/Method.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <com/sun/org/apache/bcel/internal/util/Class2HTML.h>
#include <com/sun/org/apache/bcel/internal/util/ConstantHTML.h>
#include <java/io/FileOutputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/BitSet.h>
#include <jcpp.h>

#undef ALOAD
#undef ANEWARRAY
#undef ASTORE
#undef ATTR_CODE
#undef ATTR_LOCAL_VARIABLE_TABLE
#undef ATTR_UNKNOWN
#undef CHECKCAST
#undef DLOAD
#undef DSTORE
#undef FLOAD
#undef FSTORE
#undef GETFIELD
#undef GETSTATIC
#undef GOTO
#undef GOTO_W
#undef IFEQ
#undef IFGE
#undef IFGT
#undef IFLE
#undef IFLT
#undef IFNE
#undef IFNONNULL
#undef IFNULL
#undef IF_ACMPEQ
#undef IF_ACMPNE
#undef IF_ICMPEQ
#undef IF_ICMPGE
#undef IF_ICMPGT
#undef IF_ICMPLE
#undef IF_ICMPLT
#undef IF_ICMPNE
#undef IINC
#undef ILOAD
#undef INSTANCEOF
#undef INVOKEDYNAMIC
#undef INVOKEINTERFACE
#undef INVOKESPECIAL
#undef INVOKESTATIC
#undef INVOKEVIRTUAL
#undef ISTORE
#undef JSR
#undef JSR_W
#undef LDC
#undef LDC2_W
#undef LDC_W
#undef LLOAD
#undef LOOKUPSWITCH
#undef LSTORE
#undef MULTIANEWARRAY
#undef NEW
#undef NEWARRAY
#undef PUTFIELD
#undef PUTSTATIC
#undef RET
#undef TABLESWITCH
#undef T_BYTE
#undef T_INT
#undef T_SHORT
#undef WIDE

using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $CodeExceptionArray = $Array<::com::sun::org::apache::bcel::internal::classfile::CodeException>;
using $LocalVariableArray = $Array<::com::sun::org::apache::bcel::internal::classfile::LocalVariable>;
using $MethodArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Method>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $Code = ::com::sun::org::apache::bcel::internal::classfile::Code;
using $CodeException = ::com::sun::org::apache::bcel::internal::classfile::CodeException;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantFieldref = ::com::sun::org::apache::bcel::internal::classfile::ConstantFieldref;
using $ConstantInterfaceMethodref = ::com::sun::org::apache::bcel::internal::classfile::ConstantInterfaceMethodref;
using $ConstantInvokeDynamic = ::com::sun::org::apache::bcel::internal::classfile::ConstantInvokeDynamic;
using $ConstantMethodref = ::com::sun::org::apache::bcel::internal::classfile::ConstantMethodref;
using $ConstantNameAndType = ::com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $LocalVariable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariable;
using $LocalVariableTable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariableTable;
using $Method = ::com::sun::org::apache::bcel::internal::classfile::Method;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $ByteSequence = ::com::sun::org::apache::bcel::internal::util::ByteSequence;
using $Class2HTML = ::com::sun::org::apache::bcel::internal::util::Class2HTML;
using $ConstantHTML = ::com::sun::org::apache::bcel::internal::util::ConstantHTML;
using $FileOutputStream = ::java::io::FileOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BitSet = ::java::util::BitSet;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

$FieldInfo _CodeHTML_FieldInfo_[] = {
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(CodeHTML, className)},
	{"file", "Ljava/io/PrintWriter;", nullptr, $PRIVATE | $FINAL, $field(CodeHTML, file)},
	{"gotoSet", "Ljava/util/BitSet;", nullptr, $PRIVATE, $field(CodeHTML, gotoSet)},
	{"constantPool", "Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PRIVATE | $FINAL, $field(CodeHTML, constantPool)},
	{"constantHtml", "Lcom/sun/org/apache/bcel/internal/util/ConstantHTML;", nullptr, $PRIVATE | $FINAL, $field(CodeHTML, constantHtml)},
	{"wide", "Z", nullptr, $PRIVATE | $STATIC, $staticField(CodeHTML, wide)},
	{}
};

$MethodInfo _CodeHTML_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Lcom/sun/org/apache/bcel/internal/classfile/Method;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;Lcom/sun/org/apache/bcel/internal/util/ConstantHTML;)V", nullptr, 0, $method(CodeHTML, init$, void, $String*, $String*, $MethodArray*, $ConstantPool*, $ConstantHTML*), "java.io.IOException"},
	{"codeToHTML", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;I)Ljava/lang/String;", nullptr, $PRIVATE, $method(CodeHTML, codeToHTML, $String*, $ByteSequence*, int32_t), "java.io.IOException"},
	{"findGotos", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Lcom/sun/org/apache/bcel/internal/classfile/Code;)V", nullptr, $PRIVATE, $method(CodeHTML, findGotos, void, $ByteSequence*, $Code*), "java.io.IOException"},
	{"writeMethod", "(Lcom/sun/org/apache/bcel/internal/classfile/Method;I)V", nullptr, $PRIVATE, $method(CodeHTML, writeMethod, void, $Method*, int32_t), "java.io.IOException"},
	{}
};

$ClassInfo _CodeHTML_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.util.CodeHTML",
	"java.lang.Object",
	nullptr,
	_CodeHTML_FieldInfo_,
	_CodeHTML_MethodInfo_
};

$Object* allocate$CodeHTML($Class* clazz) {
	return $of($alloc(CodeHTML));
}

bool CodeHTML::wide = false;

void CodeHTML::init$($String* dir, $String* class_name, $MethodArray* methods, $ConstantPool* constant_pool, $ConstantHTML* constant_html) {
	$useLocalCurrentObjectStackCache();
	$set(this, className, class_name);
	$set(this, constantPool, constant_pool);
	$set(this, constantHtml, constant_html);
	$set(this, file, $new($PrintWriter, static_cast<$OutputStream*>($$new($FileOutputStream, $$str({dir, class_name, "_code.html"_s})))));
	$nc(this->file)->println("<HTML><BODY BGCOLOR=\"#C0C0C0\">"_s);
	for (int32_t i = 0; i < $nc(methods)->length; ++i) {
		writeMethod(methods->get(i), i);
	}
	$nc(this->file)->println("</BODY></HTML>"_s);
	$nc(this->file)->close();
}

$String* CodeHTML::codeToHTML($ByteSequence* bytes, int32_t method_number) {
	$useLocalCurrentObjectStackCache();
	int16_t opcode = (int16_t)$nc(bytes)->readUnsignedByte();
	$var($String, name, nullptr);
	$var($String, signature, nullptr);
	int32_t default_offset = 0;
	int32_t low = 0;
	int32_t high = 0;
	int32_t index = 0;
	int32_t class_index = 0;
	int32_t vindex = 0;
	int32_t constant = 0;
	$var($ints, jump_table, nullptr);
	int32_t no_pad_bytes = 0;
	int32_t offset = 0;
	$var($StringBuilder, buf, $new($StringBuilder, 256));
	buf->append("<TT>"_s)->append($($Const::getOpcodeName(opcode)))->append("</TT></TD><TD>"_s);
	if ((opcode == $Const::TABLESWITCH) || (opcode == $Const::LOOKUPSWITCH)) {
		int32_t remainder = bytes->getIndex() % 4;
		no_pad_bytes = (remainder == 0) ? 0 : 4 - remainder;
		for (int32_t i = 0; i < no_pad_bytes; ++i) {
			bytes->readByte();
		}
		default_offset = bytes->readInt();
	}
	{
		int32_t npairs = 0;
		int32_t windex = 0;
		$var($ConstantFieldref, c1, nullptr)
		$var($String, field_name, nullptr)
		int32_t m_index = 0;
		$var($String, str, nullptr)
		$var($ConstantNameAndType, c2, nullptr)
		$var($StringArray, args, nullptr)
		$var($String, type, nullptr)
		int32_t dimensions = 0;
		switch (opcode) {
		case $Const::TABLESWITCH:
			{
				low = bytes->readInt();
				high = bytes->readInt();
				offset = bytes->getIndex() - 12 - no_pad_bytes - 1;
				default_offset += offset;
				buf->append("<TABLE BORDER=1><TR>"_s);
				$assign(jump_table, $new($ints, high - low + 1));
				for (int32_t i = 0; i < $nc(jump_table)->length; ++i) {
					jump_table->set(i, offset + bytes->readInt());
					buf->append("<TH>"_s)->append(low + i)->append("</TH>"_s);
				}
				buf->append("<TH>default</TH></TR>\n<TR>"_s);
				{
					$var($ints, arr$, jump_table);
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						int32_t element = arr$->get(i$);
						{
							buf->append("<TD><A HREF=\"#code"_s)->append(method_number)->append("@"_s)->append(element)->append("\">"_s)->append(element)->append("</A></TD>"_s);
						}
					}
				}
				buf->append("<TD><A HREF=\"#code"_s)->append(method_number)->append("@"_s)->append(default_offset)->append("\">"_s)->append(default_offset)->append("</A></TD></TR>\n</TABLE>\n"_s);
				break;
			}
		case $Const::LOOKUPSWITCH:
			{
				npairs = bytes->readInt();
				offset = bytes->getIndex() - 8 - no_pad_bytes - 1;
				$assign(jump_table, $new($ints, npairs));
				default_offset += offset;
				buf->append("<TABLE BORDER=1><TR>"_s);
				for (int32_t i = 0; i < npairs; ++i) {
					int32_t match = bytes->readInt();
					$nc(jump_table)->set(i, offset + bytes->readInt());
					buf->append("<TH>"_s)->append(match)->append("</TH>"_s);
				}
				buf->append("<TH>default</TH></TR>\n<TR>"_s);
				for (int32_t i = 0; i < npairs; ++i) {
					buf->append("<TD><A HREF=\"#code"_s)->append(method_number)->append("@"_s)->append($nc(jump_table)->get(i))->append("\">"_s)->append($nc(jump_table)->get(i))->append("</A></TD>"_s);
				}
				buf->append("<TD><A HREF=\"#code"_s)->append(method_number)->append("@"_s)->append(default_offset)->append("\">"_s)->append(default_offset)->append("</A></TD></TR>\n</TABLE>\n"_s);
				break;
			}
		case $Const::GOTO:
			{}
		case $Const::IFEQ:
			{}
		case $Const::IFGE:
			{}
		case $Const::IFGT:
			{}
		case $Const::IFLE:
			{}
		case $Const::IFLT:
			{}
		case $Const::IFNE:
			{}
		case $Const::IFNONNULL:
			{}
		case $Const::IFNULL:
			{}
		case $Const::IF_ACMPEQ:
			{}
		case $Const::IF_ACMPNE:
			{}
		case $Const::IF_ICMPEQ:
			{}
		case $Const::IF_ICMPGE:
			{}
		case $Const::IF_ICMPGT:
			{}
		case $Const::IF_ICMPLE:
			{}
		case $Const::IF_ICMPLT:
			{}
		case $Const::IF_ICMPNE:
			{}
		case $Const::JSR:
			{
				int32_t var$0 = bytes->getIndex();
				index = var$0 + bytes->readShort() - 1;
				buf->append("<A HREF=\"#code"_s)->append(method_number)->append("@"_s)->append(index)->append("\">"_s)->append(index)->append("</A>"_s);
				break;
			}
		case $Const::GOTO_W:
			{}
		case $Const::JSR_W:
			{
				int32_t var$1 = bytes->getIndex();
				windex = var$1 + bytes->readInt() - 1;
				buf->append("<A HREF=\"#code"_s)->append(method_number)->append("@"_s)->append(windex)->append("\">"_s)->append(windex)->append("</A>"_s);
				break;
			}
		case $Const::ALOAD:
			{}
		case $Const::ASTORE:
			{}
		case $Const::DLOAD:
			{}
		case $Const::DSTORE:
			{}
		case $Const::FLOAD:
			{}
		case $Const::FSTORE:
			{}
		case $Const::ILOAD:
			{}
		case $Const::ISTORE:
			{}
		case $Const::LLOAD:
			{}
		case $Const::LSTORE:
			{}
		case $Const::RET:
			{
				if (CodeHTML::wide) {
					vindex = bytes->readShort();
					CodeHTML::wide = false;
				} else {
					vindex = bytes->readUnsignedByte();
				}
				buf->append("%"_s)->append(vindex);
				break;
			}
		case $Const::WIDE:
			{
				CodeHTML::wide = true;
				buf->append("(wide)"_s);
				break;
			}
		case $Const::NEWARRAY:
			{
				buf->append("<FONT COLOR=\"#00FF00\">"_s)->append($($Const::getTypeName(bytes->readByte())))->append("</FONT>"_s);
				break;
			}
		case $Const::GETFIELD:
			{}
		case $Const::GETSTATIC:
			{}
		case $Const::PUTFIELD:
			{}
		case $Const::PUTSTATIC:
			{
				index = bytes->readShort();
				$assign(c1, $cast($ConstantFieldref, $nc(this->constantPool)->getConstant(index, $Const::CONSTANT_Fieldref)));
				class_index = $nc(c1)->getClassIndex();
				$assign(name, $nc(this->constantPool)->getConstantString(class_index, $Const::CONSTANT_Class));
				$assign(name, $Utility::compactClassName(name, false));
				index = $nc(c1)->getNameAndTypeIndex();
				$assign(field_name, $nc(this->constantPool)->constantToString(index, $Const::CONSTANT_NameAndType));
				if ($nc(name)->equals(this->className)) {
					buf->append("<A HREF=\""_s)->append(this->className)->append("_methods.html#field"_s)->append(field_name)->append("\" TARGET=Methods>"_s)->append(field_name)->append("</A>\n"_s);
				} else {
					buf->append($($nc(this->constantHtml)->referenceConstant(class_index)))->append("."_s)->append(field_name);
				}
				break;
			}
		case $Const::CHECKCAST:
			{}
		case $Const::INSTANCEOF:
			{}
		case $Const::NEW:
			{
				index = bytes->readShort();
				buf->append($($nc(this->constantHtml)->referenceConstant(index)));
				break;
			}
		case $Const::INVOKESPECIAL:
			{}
		case $Const::INVOKESTATIC:
			{}
		case $Const::INVOKEVIRTUAL:
			{}
		case $Const::INVOKEINTERFACE:
			{}
		case $Const::INVOKEDYNAMIC:
			{
				m_index = bytes->readShort();
				if (opcode == $Const::INVOKEINTERFACE) {
					bytes->readUnsignedByte();
					bytes->readUnsignedByte();
					$var($ConstantInterfaceMethodref, c, $cast($ConstantInterfaceMethodref, $nc(this->constantPool)->getConstant(m_index, $Const::CONSTANT_InterfaceMethodref)));
					class_index = $nc(c)->getClassIndex();
					index = c->getNameAndTypeIndex();
					$assign(name, $Class2HTML::referenceClass(class_index));
				} else if (opcode == $Const::INVOKEDYNAMIC) {
					bytes->readUnsignedByte();
					bytes->readUnsignedByte();
					$var($ConstantInvokeDynamic, c, $cast($ConstantInvokeDynamic, $nc(this->constantPool)->getConstant(m_index, $Const::CONSTANT_InvokeDynamic)));
					index = $nc(c)->getNameAndTypeIndex();
					$assign(name, $str({"#"_s, $$str(c->getBootstrapMethodAttrIndex())}));
				} else {
					$var($ConstantMethodref, c, $cast($ConstantMethodref, $nc(this->constantPool)->getConstant(m_index, $Const::CONSTANT_Methodref)));
					class_index = $nc(c)->getClassIndex();
					index = c->getNameAndTypeIndex();
					$assign(name, $Class2HTML::referenceClass(class_index));
				}
				$assign(str, $Class2HTML::toHTML($($nc(this->constantPool)->constantToString($($nc(this->constantPool)->getConstant(index, $Const::CONSTANT_NameAndType))))));
				$assign(c2, $cast($ConstantNameAndType, $nc(this->constantPool)->getConstant(index, $Const::CONSTANT_NameAndType)));
				$assign(signature, $nc(this->constantPool)->constantToString($nc(c2)->getSignatureIndex(), $Const::CONSTANT_Utf8));
				$assign(args, $Utility::methodSignatureArgumentTypes(signature, false));
				$assign(type, $Utility::methodSignatureReturnType(signature, false));
				buf->append(name)->append(".<A HREF=\""_s)->append(this->className)->append("_cp.html#cp"_s)->append(m_index)->append("\" TARGET=ConstantPool>"_s)->append(str)->append("</A>"_s)->append("("_s);
				for (int32_t i = 0; i < $nc(args)->length; ++i) {
					buf->append($($Class2HTML::referenceType(args->get(i))));
					if (i < args->length - 1) {
						buf->append(", "_s);
					}
				}
				buf->append("):"_s)->append($($Class2HTML::referenceType(type)));
				break;
			}
		case $Const::LDC_W:
			{}
		case $Const::LDC2_W:
			{
				index = bytes->readShort();
				buf->append("<A HREF=\""_s)->append(this->className)->append("_cp.html#cp"_s)->append(index)->append("\" TARGET=\"ConstantPool\">"_s)->append($($Class2HTML::toHTML($($nc(this->constantPool)->constantToString(index, $nc($($nc(this->constantPool)->getConstant(index)))->getTag())))))->append("</a>"_s);
				break;
			}
		case $Const::LDC:
			{
				index = bytes->readUnsignedByte();
				buf->append("<A HREF=\""_s)->append(this->className)->append("_cp.html#cp"_s)->append(index)->append("\" TARGET=\"ConstantPool\">"_s)->append($($Class2HTML::toHTML($($nc(this->constantPool)->constantToString(index, $nc($($nc(this->constantPool)->getConstant(index)))->getTag())))))->append("</a>"_s);
				break;
			}
		case $Const::ANEWARRAY:
			{
				index = bytes->readShort();
				buf->append($($nc(this->constantHtml)->referenceConstant(index)));
				break;
			}
		case $Const::MULTIANEWARRAY:
			{
				index = bytes->readShort();
				dimensions = bytes->readByte();
				buf->append($($nc(this->constantHtml)->referenceConstant(index)))->append(":"_s)->append(dimensions)->append("-dimensional"_s);
				break;
			}
		case $Const::IINC:
			{
				if (CodeHTML::wide) {
					vindex = bytes->readShort();
					constant = bytes->readShort();
					CodeHTML::wide = false;
				} else {
					vindex = bytes->readUnsignedByte();
					constant = bytes->readByte();
				}
				buf->append("%"_s)->append(vindex)->append(" "_s)->append(constant);
				break;
			}
		default:
			{
				if ($Const::getNoOfOperands(opcode) > 0) {
					for (int32_t i = 0; i < $Const::getOperandTypeCount(opcode); ++i) {
						switch ($Const::getOperandType(opcode, i)) {
						case $Const::T_BYTE:
							{
								buf->append(bytes->readUnsignedByte());
								break;
							}
						case $Const::T_SHORT:
							{
								buf->append((int32_t)bytes->readShort());
								break;
							}
						case $Const::T_INT:
							{
								buf->append(bytes->readInt());
								break;
							}
						default:
							{
								$throwNew($IllegalStateException, $$str({"Unreachable default case reached! "_s, $$str($Const::getOperandType(opcode, i))}));
							}
						}
						buf->append("&nbsp;"_s);
					}
				}
			}
		}
	}
	buf->append("</TD>"_s);
	return buf->toString();
}

void CodeHTML::findGotos($ByteSequence* bytes, $Code* code) {
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	$set(this, gotoSet, $new($BitSet, $nc(bytes)->available()));
	int32_t opcode = 0;
	if (code != nullptr) {
		$var($CodeExceptionArray, ce, code->getExceptionTable());
		{
			$var($CodeExceptionArray, arr$, ce);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($CodeException, cex, arr$->get(i$));
				{
					$nc(this->gotoSet)->set($nc(cex)->getStartPC());
					$nc(this->gotoSet)->set($nc(cex)->getEndPC());
					$nc(this->gotoSet)->set($nc(cex)->getHandlerPC());
				}
			}
		}
		$var($AttributeArray, attributes, code->getAttributes());
		{
			$var($AttributeArray, arr$, attributes);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Attribute, attribute, arr$->get(i$));
				{
					if ($nc(attribute)->getTag() == $Const::ATTR_LOCAL_VARIABLE_TABLE) {
						$var($LocalVariableArray, vars, $nc(($cast($LocalVariableTable, attribute)))->getLocalVariableTable());
						{
							$var($LocalVariableArray, arr$, vars);
							int32_t len$ = $nc(arr$)->length;
							int32_t i$ = 0;
							for (; i$ < len$; ++i$) {
								$var($LocalVariable, var, arr$->get(i$));
								{
									int32_t start = $nc(var)->getStartPC();
									int32_t end = start + var->getLength();
									$nc(this->gotoSet)->set(start);
									$nc(this->gotoSet)->set(end);
								}
							}
						}
						break;
					}
				}
			}
		}
	}
	for (; $nc(bytes)->available() > 0;) {
		opcode = bytes->readUnsignedByte();
		{
			int32_t remainder = 0;
			int32_t no_pad_bytes = 0;
			int32_t default_offset = 0;
			int32_t offset = 0;
			switch (opcode) {
			case $Const::TABLESWITCH:
				{}
			case $Const::LOOKUPSWITCH:
				{
					remainder = bytes->getIndex() % 4;
					no_pad_bytes = (remainder == 0) ? 0 : 4 - remainder;
					for (int32_t j = 0; j < no_pad_bytes; ++j) {
						bytes->readByte();
					}
					default_offset = bytes->readInt();
					if (opcode == $Const::TABLESWITCH) {
						int32_t low = bytes->readInt();
						int32_t high = bytes->readInt();
						offset = bytes->getIndex() - 12 - no_pad_bytes - 1;
						default_offset += offset;
						$nc(this->gotoSet)->set(default_offset);
						for (int32_t j = 0; j < (high - low + 1); ++j) {
							index = offset + bytes->readInt();
							$nc(this->gotoSet)->set(index);
						}
					} else {
						int32_t npairs = bytes->readInt();
						offset = bytes->getIndex() - 8 - no_pad_bytes - 1;
						default_offset += offset;
						$nc(this->gotoSet)->set(default_offset);
						for (int32_t j = 0; j < npairs; ++j) {
							bytes->readInt();
							index = offset + bytes->readInt();
							$nc(this->gotoSet)->set(index);
						}
					}
					break;
				}
			case $Const::GOTO:
				{}
			case $Const::IFEQ:
				{}
			case $Const::IFGE:
				{}
			case $Const::IFGT:
				{}
			case $Const::IFLE:
				{}
			case $Const::IFLT:
				{}
			case $Const::IFNE:
				{}
			case $Const::IFNONNULL:
				{}
			case $Const::IFNULL:
				{}
			case $Const::IF_ACMPEQ:
				{}
			case $Const::IF_ACMPNE:
				{}
			case $Const::IF_ICMPEQ:
				{}
			case $Const::IF_ICMPGE:
				{}
			case $Const::IF_ICMPGT:
				{}
			case $Const::IF_ICMPLE:
				{}
			case $Const::IF_ICMPLT:
				{}
			case $Const::IF_ICMPNE:
				{}
			case $Const::JSR:
				{
					int32_t var$0 = bytes->getIndex();
					index = var$0 + bytes->readShort() - 1;
					$nc(this->gotoSet)->set(index);
					break;
				}
			case $Const::GOTO_W:
				{}
			case $Const::JSR_W:
				{
					int32_t var$1 = bytes->getIndex();
					index = var$1 + bytes->readInt() - 1;
					$nc(this->gotoSet)->set(index);
					break;
				}
			default:
				{
					bytes->unreadByte();
					codeToHTML(bytes, 0);
				}
			}
		}
	}
}

void CodeHTML::writeMethod($Method* method, int32_t method_number) {
	$useLocalCurrentObjectStackCache();
	$var($String, signature, $nc(method)->getSignature());
	$var($StringArray, args, $Utility::methodSignatureArgumentTypes(signature, false));
	$var($String, type, $Utility::methodSignatureReturnType(signature, false));
	$var($String, name, method->getName());
	$var($String, html_name, $Class2HTML::toHTML(name));
	$var($String, access, $Utility::accessToString(method->getAccessFlags()));
	$assign(access, $Utility::replace(access, " "_s, "&nbsp;"_s));
	$var($AttributeArray, attributes, method->getAttributes());
	$nc(this->file)->print($$str({"<P><B><FONT COLOR=\"#FF0000\">"_s, access, "</FONT>&nbsp;<A NAME=method"_s, $$str(method_number), ">"_s, $($Class2HTML::referenceType(type)), "</A>&nbsp<A HREF=\""_s, this->className, "_methods.html#method"_s, $$str(method_number), "\" TARGET=Methods>"_s, html_name, "</A>("_s}));
	for (int32_t i = 0; i < $nc(args)->length; ++i) {
		$nc(this->file)->print($($Class2HTML::referenceType(args->get(i))));
		if (i < args->length - 1) {
			$nc(this->file)->print(",&nbsp;"_s);
		}
	}
	$nc(this->file)->println(")</B></P>"_s);
	$var($Code, c, nullptr);
	$var($bytes, code, nullptr);
	if ($nc(attributes)->length > 0) {
		$nc(this->file)->print("<H4>Attributes</H4><UL>\n"_s);
		for (int32_t i = 0; i < attributes->length; ++i) {
			int8_t tag = $nc(attributes->get(i))->getTag();
			if (tag != $Const::ATTR_UNKNOWN) {
				$nc(this->file)->print($$str({"<LI><A HREF=\""_s, this->className, "_attributes.html#method"_s, $$str(method_number), "@"_s, $$str(i), "\" TARGET=Attributes>"_s, $($Const::getAttributeName(tag)), "</A></LI>\n"_s}));
			} else {
				$nc(this->file)->print($$str({"<LI>"_s, attributes->get(i), "</LI>"_s}));
			}
			if (tag == $Const::ATTR_CODE) {
				$assign(c, $cast($Code, attributes->get(i)));
				$var($AttributeArray, attributes2, $nc(c)->getAttributes());
				$assign(code, c->getCode());
				$nc(this->file)->print("<UL>"_s);
				for (int32_t j = 0; j < $nc(attributes2)->length; ++j) {
					tag = $nc(attributes2->get(j))->getTag();
					$nc(this->file)->print($$str({"<LI><A HREF=\""_s, this->className, "_attributes.html#method"_s, $$str(method_number), "@"_s, $$str(i), "@"_s, $$str(j), "\" TARGET=Attributes>"_s, $($Const::getAttributeName(tag)), "</A></LI>\n"_s}));
				}
				$nc(this->file)->print("</UL>"_s);
			}
		}
		$nc(this->file)->println("</UL>"_s);
	}
	if (code != nullptr) {
		{
			$var($ByteSequence, stream, $new($ByteSequence, code));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						stream->mark(stream->available());
						findGotos(stream, c);
						stream->reset();
						$nc(this->file)->println("<TABLE BORDER=0><TR><TH ALIGN=LEFT>Byte<BR>offset</TH><TH ALIGN=LEFT>Instruction</TH><TH ALIGN=LEFT>Argument</TH>"_s);
						for (; stream->available() > 0;) {
							int32_t offset = stream->getIndex();
							$var($String, str, codeToHTML(stream, method_number));
							$var($String, anchor, ""_s);
							if ($nc(this->gotoSet)->get(offset)) {
								$assign(anchor, $str({"<A NAME=code"_s, $$str(method_number), "@"_s, $$str(offset), "></A>"_s}));
							}
							$var($String, anchor2, nullptr);
							if (stream->getIndex() == code->length) {
								$assign(anchor2, $str({"<A NAME=code"_s, $$str(method_number), "@"_s, $$str(code->length), ">"_s, $$str(offset), "</A>"_s}));
							} else {
								$assign(anchor2, $str({""_s, $$str(offset)}));
							}
							$nc(this->file)->println($$str({"<TR VALIGN=TOP><TD>"_s, anchor2, "</TD><TD>"_s, anchor, str, "</TR>"_s}));
						}
					} catch ($Throwable& t$) {
						try {
							stream->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					stream->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
		$nc(this->file)->println("<TR><TD> </A></TD></TR>"_s);
		$nc(this->file)->println("</TABLE>"_s);
	}
}

void clinit$CodeHTML($Class* class$) {
	CodeHTML::wide = false;
}

CodeHTML::CodeHTML() {
}

$Class* CodeHTML::load$($String* name, bool initialize) {
	$loadClass(CodeHTML, name, initialize, &_CodeHTML_ClassInfo_, clinit$CodeHTML, allocate$CodeHTML);
	return class$;
}

$Class* CodeHTML::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com