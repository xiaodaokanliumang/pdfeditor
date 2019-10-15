#ifndef PDFDOCUMENT_H
#define PDFDOCUMENT_H

#ifndef IPDFDOCUMENT_H
#include "seed_pdfwidget/ipdfdocument.h"
#endif /*IPDFDOCUMENT_H*/

#include "QtWidgets/QTextEdit"

BEGIN_DOX_NAMESPACE

FORWARD_DECLARE_CLASS(IPDFViewer)

class PDFDocument
	: public QTextEdit
	, public IPDFDocument
{
	REGISTER_ACTUALIZE(PDFDocument, IPDFDocument)

public:

	/* @接口 默认构造函数
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月14号
	 */
	PDFDocument();

	/* @接口 默认析构函数
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月14号
	 */
	~PDFDocument();

	/* @接口 保存文件
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月14号
	 */
	virtual bool save();

	/* @接口 
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月15号
	 */
	virtual void clearAll();

	/* @接口 获取文档的背景颜色
	 * @返回 QColor 文档背景的颜色
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月12号
	 */
	virtual QColor color() const;

	/* @接口 
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月14号
	 */
	virtual QString title() const;

	/* @接口 设置文档背景的颜色
	 * @参数 QColor 文档背景的颜色
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月12号
	 */
	virtual bool color(const QColor &);

	/* @接口 打开文件
	 * @参数 DocType 文件的类型
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月14号
	 */
	virtual bool open(const QString &, const DocType &);

	/* @接口 将文件另存
	 * @参数 QString 另存的路径
	 * @参数 DocType 另存的类型
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月14号
	 */
	virtual bool saveAs(const QString &, const DocType &);

	/* @接口 
	 * @参数 
	 * @参数 
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月15号
	 */
	virtual void addText(const QString &, bool isAppend = true);

private:

	QString m_file;
	QString m_fName;

};

END_DOX_NAMESPACE

#endif /*PDFDOCUMENT_H*/