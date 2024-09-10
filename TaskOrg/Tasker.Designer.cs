using System;
using System.Windows.Forms;

namespace TaskOrg
{
    partial class Tasker
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
       protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.webview = new Microsoft.Web.WebView2.WinForms.WebView2();
            ((System.ComponentModel.ISupportInitialize)(this.webview)).BeginInit();
            this.SuspendLayout();
            // 
            // webview
            // 
            this.webview.AllowExternalDrop = true;
            this.webview.CreationProperties = null;
            this.webview.DefaultBackgroundColor = System.Drawing.Color.White;
            this.webview.Dock = DockStyle.Fill;
            this.webview.Location = new System.Drawing.Point(0, 0);
            this.webview.Name = "webview";
            this.webview.Size = new System.Drawing.Size(800, 450);
            this.webview.TabIndex = 0;
            this.webview.ZoomFactor = 1D;
            // 
            // Tasker
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            //this.FormBorderStyle = FormBorderStyle.FixedDialog;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.webview);
            this.Name = "Tasker";
            this.Text = "Task Organizer";
            this.Load += new System.EventHandler(this.LoadWebView);
            ((System.ComponentModel.ISupportInitialize)(this.webview)).EndInit();
            this.ResumeLayout(false);

        }
   
        #endregion

        #region WebView2 related code

        private void LoadWebView(object sender, System.EventArgs e)
        {
            string DefaultUrl = "http://localhost:3000";
            if (!Uri.IsWellFormedUriString(DefaultUrl, UriKind.Absolute))
                MessageBox.Show("The URL provided isn't valid.");
            else
                webview.Source = new Uri(DefaultUrl);            
        }

        #endregion

        private Microsoft.Web.WebView2.WinForms.WebView2 webview;
    }
}

