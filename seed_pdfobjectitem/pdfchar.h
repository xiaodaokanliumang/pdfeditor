#ifndef PDFCHAR_H
#define PDFCHAR_H

#ifndef IPDFCHAR_H
#include "seed_pdfobject/ipdfchar.h"
#endif /*IPDFCHAR_H*/

#include "QtWidgets/QWidget"

BEGIN_DOX_NAMESPACE

class PDFChar
	: public IPDFChar
	, public QWidget
{
	REGISTER_ACTUALIZE(PDFChar, IPDFChar)

public:

	/* @接口 默认构造函数
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月14号
	 */
	PDFChar();

	/* @接口 默认析构函数
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月14号
	 */
	~PDFChar();

	/* @接口
	 * @参数
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月14号
	 */
	virtual bool textSize(int);

	/* @接口
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月14号
	 */
	virtual int textSize() const;

	/* @接口
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月12号
	 */
	virtual QColor color() const;

	/* @接口
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月12号
	 */
	virtual QColor textColor() const;

	/* @接口
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月14号
	 */
	virtual QString textFont() const;

	/* @接口
	 * @参数
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月12号
	 */
	virtual bool color(const QColor &);

	/* @接口
	 * @参数
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月14号
	 */
	virtual bool textFont(const QString &);

	/* @接口
	 * @参数
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月12号
	 */
	virtual bool textColor(const QColor &);

};

END_DOX_NAMESPACE

#endif /*PDFCHAR_H*/