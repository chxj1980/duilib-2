#pragma once

#define DUICONTROL_CLASSNAME L"DUIControl"

class CUIControl;
class CUIWindow;

typedef CUIControl* (CALLBACK* FINDCONTROLPROC)(CUIControl*, LPVOID);

class CUIControl
{
public:
    CUIControl(void);
    virtual ~CUIControl(void);

public:
    
    /** \fn virtual CUIString GetClass() const
    	\brief ��ȡ����.
    	\return ����.
    */

    virtual CUIString GetClass() const;

    /** \fn virtual LPVOID GetInterface(const CUIString& strName)
    	\brief ͨ���ӿ����ƻ�ȡ�ӿ�ָ��.
    	\param [in] strName �ӿ�����.
    	\return �ӿ�ָ��,���Ʋ����ڷ���NULL.
    */
    
    virtual LPVOID GetInterface(const CUIString& strName);

    /** \fn virtual CUIString GetName()
        \brief ��ȡ�ؼ�����.
        \return �ؼ�������.
    */
    
    virtual CUIString GetName() const;
    
    /** \fn virtual void SetName(CUIString &strName)
    	\brief ���ÿؼ�����.
    	\param [in] strName �ؼ���������Ӧ���ַ���.
    */

    virtual void SetName(const CUIString &strName);

    /** \fn DWORD GetBkColor() const
    	\brief ��ȡ������ɫ.
    	\return ������ɫ.
    */
    
    DWORD GetBkColor() const;
    
    /** \fn void SetBkColor(DWORD dwBackColor)
    	\brief ���ñ�����ɫ.
    	\param [in] dwBackColor ������ɫ.
    	\return .
    */
    
    void SetBkColor(DWORD dwBackColor);
    
    /** \fn DWORD GetBkColor2() const
    	\brief ��ȡ���䱳����ɫ2.
    	\return ���䱳����ɫ2.
    */
    
    DWORD GetBkColor2() const;
    
    /** \fn void SetBkColor2(DWORD dwBackColor)
    	\brief ��ȡ���䱳����ɫ2.
    	\param [in] dwBackColor ���䱳����ɫ2.
    */
    
    void SetBkColor2(DWORD dwBackColor);
    
    /** \fn DWORD GetBkColor3() const
    	\brief ��ȡ���䱳����ɫ3.
    	\return ���䱳����ɫ3.
    */
    
    DWORD GetBkColor3() const;
    
    /** \fn void SetBkColor3(DWORD dwBackColor)
    	\brief ��ȡ���䱳����ɫ3.
    	\param [in] dwBackColor ���䱳����ɫ3.
    */
    
    void SetBkColor3(DWORD dwBackColor);
    
    /** \fn CUIString GetBkImage() const
    	\brief ��ȡ����ͼƬ.
    	\return ����ͼƬ·��.
    */
    
    CUIString GetBkImage() const;
    
    /** \fn void SetBkImage(const CUIString& strImage)
    	\brief ���ñ���ͼƬ.
    	\param [in] strImage ����ͼƬ·��.
    */
    
    void SetBkImage(const CUIString& strImage);
    
    /** \fn bool DrawImage(cairo_t *cr, LPCWSTR lpstrImage, LPCWSTR lpstrModify = NULL)
    	\brief ��ָ�����豸Context�ϻ�ͼ.
    	\param [in] cr cairo context.
        \param [in] lpstrImage Ҫ���Ƶ�ͼƬ��·��.
        \param [in] lpstrModify ������ͼƬ�Ļ�������,Ĭ��Ϊ��.
    	\return �ɹ�����true, ����false.
    */
    
    bool DrawImage(cairo_t *cr, LPCWSTR lpstrImage, LPCWSTR lpstrModify = NULL);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void DoPaint(cairo_t *cr, const CUIRect& rcPaint);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void PaintBkColor(cairo_t *cr);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void PaintBkImage(cairo_t *cr);

    //virtual void PaintStatusImage(cairo_t *cr);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void PaintText(cairo_t *cr);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    void Invalidate();
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    void NeedUpdate();
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    bool IsUpdateNeeded() const;
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    void NeedParentUpdate();
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual CUIControl* GetParent() const;
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void SetPos(const CUIRect& rc);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual CUIRect GetPos() const;
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void SetVisible(bool bVisible);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual bool IsVisible() const;
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual bool IsEnabled() const;
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void SetEnabled(bool bEnabled);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual CUIControl* FindControl(FINDCONTROLPROC Proc, LPVOID pData, UINT uFlags);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    bool IsMouseEnabled() const;
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    void SetMouseEnabled(bool bEnabled);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void DoEvent(TEventUI& event);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    bool IsFloat() const;
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    void SetFloat(bool bFloat);
    int GetFixedHeight() const;
    void SetFixedHeight(int cy);
    void SetFixedWidth(int cx);
    int GetFixedWidth() const;
    void SetFixedXY(SIZE szXY);
    SIZE GetFixedXY() const;

    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    void ApplyAttributeList(LPCWSTR pstrList);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void SetAttribute(LPCWSTR pstrName, LPCWSTR pstrValue);
    //virtual void PaintBorder(cairo_t *cr);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void SetOwnWindow(CUIWindow* pWindow, CUIControl* pParent, bool bInit = true);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    //void SetManager(CUIManager *pManager);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual SIZE EstimateSize(SIZE szAvailable);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void SetText(LPCWSTR pstrText);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual bool Activate();
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual bool IsFocused() const;
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void PaintStatusImage(cairo_t *cr);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void SetMaxHeight(int cy);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual int GetMaxHeight() const;
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void SetMinHeight(int cy);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual int GetMinHeight() const;
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void SetMaxWidth(int cx);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual int GetMaxWidth() const;
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void SetMinWidth(int cx);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual int GetMinWidth() const;
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual CUIRect GetPadding() const;
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void SetPadding(const CUIRect& rcPadding);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void DoPostPaint(cairo_t *cr, const CUIRect& rcPaint);
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */

    virtual void Init();
    
    /** \fn 
    	\brief .
    	\param .
    	\return .
    */
    
    virtual void PaintBorder(cairo_t *cr);

    //
    // �߿����
    //
    
    void SetBorderColor(DWORD dwBorderColor);
    DWORD GetBorderColor() const;
    int GetBorderSize() const;
    void SetBorderSize(int nSize);
    
private:

    /** ������ɫ*/
    DWORD m_dwBackColor;

    /** ������ɫ2*/
    DWORD m_dwBackColor2;

    /** ������ɫ2*/
    DWORD m_dwBackColor3;

    /** ȫ��manager*/
    /*CUIManager *m_Manager;*/
    
    /** �ؼ��Ƿ����*/
    bool m_bEnabled;

    /** ����ڴ˿ؼ����Ƿ����*/
    bool m_bMouseEnabled;
    
    /** �ؼ��Ƿ���Ҫ����*/
    bool m_bUpdateNeeded;
    
    /** �ؼ��Ƿ������pos*/
    bool m_bSetPos;
    
    /** �ؼ��Ƿ�ʹ�ø�������*/
    bool m_bFloat;
    
    /** �ؼ��ĳ���*/
    CUISize m_cXY;

    /** �ؼ�����󳤿�*/
    CUISize m_cxyMax;
    
    /** �ؼ�����С����*/
    CUISize m_cxyMin;

    CUIRect m_rcPadding;

protected:
    
    /** �ؼ�����*/
    CUIString m_strName;

    /** �ؼ��Ƿ�ɼ�*/
    bool m_bVisible;

    /** ���ڴ��游�ؼ��ڵ�*/
    CUIControl* m_Parent;

    /** ��ʾ�ؼ��Ƿ��ڻ�ȡ�����״̬��*/
    bool m_bFocused;

    /** ����rect*/
    CUIRect m_rcItem;

    /** �ؼ��̶�����*/
    CUISize m_cxyFixed;

    /** �����ؼ���window*/
    CUIWindow *m_Window;

    /** �ؼ�paint����*/
    CUIRect m_rcPaint;
    
    /** ���ڱ���ؼ���ʾ������*/
    CUIString m_strText;
    
    /** ��¼�߿��С*/
    int m_nBorderSize;

    /** �߿���ɫ*/
    DWORD m_dwBorderColor;

    /** ����ͼƬ*/
    CUIString m_strBackImage;
};
